/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:54:31 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/25 19:29:44 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b);

int	*sa(int *list_a)
{
	ft_swap(&list_a[0], &list_a[1]);
	return (list_a);
}

int	*sb(int *list_b)
{
	ft_swap(&list_b[0], &list_b[1]);
	return (list_b);
}

void	ss(int *list_a, int *list_b)
{
	sa(list_a);
	sb(list_b);
}
