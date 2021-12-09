/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operators.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 00:48:31 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*temp;

	if (!*list_a)
		return ;
	temp = *list_a;
	*list_a = (*list_a)->next;
	temp->next = NULL;
	ft_lstadd_back(list_a, temp);
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*temp;

	if (!*list_b)
		return ;
	temp = *list_b;
	*list_b = (*list_b)->next;
	temp->next = NULL;
	ft_lstadd_back(list_b, temp);
	write(1, "rb\n", 3);
}
