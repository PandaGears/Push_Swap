/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:45:50 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:46:42 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list *lst)
{
	ft_list_prepend(lst, lst->tail->data);
	ft_list_del(lst, lst->tail);
}

void		rra(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		reverse_rotate(lst);
}

void		rrb(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		reverse_rotate(lst);
}

void		rrr(t_list *l_a, t_list *l_b)
{
	if (l_a != NULL && l_a->head != NULL && l_a->head->next != NULL)
		reverse_rotate(l_a);
	if (l_b != NULL && l_b->head != NULL && l_b->head->next != NULL)
	reverse_rotate(l_b);
}
