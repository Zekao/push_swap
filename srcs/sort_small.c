/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:34:41 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/08 02:51:48 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(int argc, t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (argc-- > 3)
	{
		i = ft_find_min(*list_a);
		while ((*list_a)->content > i)
		{
			if ((*list_a)->next->content == i)
				ra(list_a);
			else
				rra(list_a);
		}
		pb(list_a, list_b);
	}
	hardcode_sort(list_a);
	pa(list_a, list_b);
	pa(list_a, list_b);
}

void	ft_sort_four(int argc, t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (argc-- > 3)
	{
		i = ft_find_min(*list_a);
		while ((*list_a)->content > i)
		{
			if ((*list_a)->next->content == i)
				ra(list_a);
			else
				rra(list_a);
		}
		pb(list_a, list_b);
	}
	hardcode_sort(list_a);
	pa(list_a, list_b);
}

void	ft_sort_two(t_list **list_a)
{
	sa(list_a);
}
