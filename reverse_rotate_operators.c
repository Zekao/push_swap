/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operators.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/05 17:20:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *tab_a)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(tab_a);
	size--;
	while (i < size)
	{
		ft_swap(&tab_a[i], &tab_a[i + 1]);
		i++;
	}
	write(1, "rra\n", 4);
}

void	rrb(int *tab_b)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(tab_b);
	size--;
	while (i < size)
	{
		ft_swap(&tab_b[i], &tab_b[i + 1]);
		i++;
	}
	write(1, "rrb\n", 4);
}

void	rrr(int *tab_a, int *tab_b)
{
	rra(tab_a);
	rrb(tab_b);
}