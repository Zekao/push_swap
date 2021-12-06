/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:57:45 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/06 13:59:42 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	if (!*list_b)
		return ;
	temp = *list_b;
	temp->next = NULL;
	*list_b = (*list_b)->next;
	ft_lstadd_back(list_a, temp);
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*temp;

	if (!*list_a)
		return ;
	temp = *list_a;
	temp->next = NULL;
	*list_a = (*list_a)->next;
	ft_lstadd_back(list_b, temp);
	write(1, "pb\n", 3);
}
