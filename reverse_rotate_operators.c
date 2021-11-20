/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operators.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 17:09:24 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *list_a)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(list_a);
	size--;
	while (i < size)
	{
		ft_swap(&list_a[i], &list_a[i + 1]);
		i++;;
	}
}

void	ft_rrb(int *list_b)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(list_b);
	size--;
	while (i < size)
	{
		ft_swap(&list_b[i], &list_b[i + 1]);
		i++;
	}
}

void	ft_rrr(int *list_a, int *list_b)
{
	ft_rra(list_a);
	ft_rrb(list_b);
}