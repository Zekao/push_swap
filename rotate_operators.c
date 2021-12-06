/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/06 15:11:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*temp;

	temp = *list_a;
	*list_a = temp->next;
	temp->next = NULL;
	ft_lstadd_back(list_a, temp);
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*temp;

	temp = *list_b;
	*list_b = temp->next;
	temp->next = NULL;
	ft_lstadd_back(list_b, temp);
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
}
