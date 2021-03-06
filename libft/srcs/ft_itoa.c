/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:45:16 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/04 09:24:28 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		nbrlen(int num)
{
	int		i;

	i = 1;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	ncpy;

	len = nbrlen(n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n < 0)
		ncpy = -n;
	else
		ncpy = n;
	str[len] = '\0';
	str[--len] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--len] = ncpy % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
