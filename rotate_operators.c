/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/28 01:48:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *list_a)
{
	int	size;
	int	i;
//	int	temp;

	i = 0;
	size = ft_lstlen(list_a);
//	temp = list_a[size];
	while (i < size)
	{
		ft_swap(&list_a[size], &list_a[size - 1]);
	}
}
