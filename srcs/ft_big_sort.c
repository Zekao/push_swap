/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:45:43 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 17:50:58 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void    ft_radix_sort(t_list **list_a, t_list **list_b, int nbneg)
{
    t_list	*temp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	nbneg = 1;
	temp = *list_a;
	size = ft_lstsize(*list_a);
	max_bits = get_max_bits(list_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp = *list_a;
			if (((temp->index >> i) & 1) == 1)
				ra(list_a);
			else
				pb(list_a, list_b);
		}
		while (ft_lstsize(*list_b) != 0)
			pa(list_a, list_b);
		i++;
	}
}
