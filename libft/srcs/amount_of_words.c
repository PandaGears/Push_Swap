/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amount_of_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:29:15 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/10 12:29:29 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_amount_of_words(char const *s, char c)
{
	size_t	num_words;
	size_t	i;

	i = 0;
	num_words = 0;
	if (s[i] && (s[i] != c) && (s[i + 1] != c) && (s[i + 1] != 0))
		num_words++;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			num_words++;
		i++;
	}
	return (num_words);
}
