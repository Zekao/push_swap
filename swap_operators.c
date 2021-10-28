/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:54:31 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/28 01:59:56 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b);

void	sa(int *list_a)
{
	if (list_a[0] && list_a[1])
	{
		ft_swap(&list_a[0], &list_a[1]);
		write(1, "sa\n", 3);
	}
}

void	sb(int *list_b)
{
	if (list_b[0] && list_b[1])
	{
		ft_swap(&list_b[0], &list_b[1]);
		write(1, "sb\n", 3);
	}
}

void	ss(int *list_a, int *list_b)
{
	sa(list_a);
	sb(list_b);
}
