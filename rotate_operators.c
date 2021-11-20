/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 17:04:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *list_a)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(list_a);
	size--;
	while (i < size)
	{
		ft_swap(&list_a[size], &list_a[size - 1]);
		size--;
	}
}

void	ft_rb(int *list_b)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstlen(list_b);
	size--;
	while (i < size)
	{
		ft_swap(&list_b[size], &list_b[size - 1]);
		size--;
	}
}

void	ft_rr(int *list_a, int *list_b)
{
	ft_ra(list_a);
	ft_rb(list_b);
}