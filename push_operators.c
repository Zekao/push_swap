/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:57:45 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 17:17:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *list_a, int *list_b)
{
	int	size;
	int	size_b;

	size_b = ft_lstlen(list_b);
	size = ft_lstlen(list_a);
	if (!list_b)
		return ;
	list_a[size + 1] = list_b[size_b];
	list_b[size_b] = 0;
}

void	pb(int *list_a, int *list_b)
{
	int	size;
	int	size_a;

	size_a = ft_lstlen(list_a);
	size = ft_lstlen(list_b);
	if (!list_a)
		return ;
	list_b[size + 1] = list_a[size_a];
	list_a[size_a] = 0;
}
