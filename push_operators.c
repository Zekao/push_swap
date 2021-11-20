/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:57:45 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 18:07:34 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *list_a, int *list_b)
{
	int	size;
	int	size_b;
	int	*new_list_b;
	int	i;
	
	if (!list_b)
		return ;
	size_b = ft_lstlen(list_b) - 1;
	size = ft_lstlen(list_a) - 1;
	new_list_b = malloc(sizeof(int) * (size_b - 1));
	if (!new_list_b)
		return ;
	list_a[size + 1] = list_b[size_b];
	while (i++ < size_b - 1)
		new_list_b[i] = list_b[i];
	free(list_b);
	list_b = new_list_b;
}

void	pb(int *list_a, int *list_b)
{
	int	size;
	int	size_a;
	int	*new_list_a;
	int	i;

	i = 0;
	if (!list_a)
		return ;
	size_a = ft_lstlen(list_a - 1);
	size = ft_lstlen(list_b - 1);
	new_list_a = malloc(sizeof(int) * (size_a - 1));
	if (!new_list_a)
		return ;
	list_b[size + 1] = list_a[size_a];
	while (i++ < size_a - 1)
		new_list_a[i] = list_a[i];
	free(list_a);
	list_a = new_list_a;
}
