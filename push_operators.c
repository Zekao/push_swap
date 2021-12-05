/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:57:45 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/05 20:48:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *list_a, int *list_b, int *size_a, int *size_b)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	temp = list_b[0];
	if (*size_b == 0)
		return ;
	while (i < *size_a)
	{
		temp2 = list_a[i + 1];
		list_a[i + 1] = temp;
		temp = temp2;
		i++;
	}
	list_a[0] = list_b[0];
	i = 0;
	while (i < *size_b)
	{
		list_b[i] = list_b[i + 1];
		++i;
	}
	++*size_a;
	--*size_b;
}

void	pb(int *list_a, int *list_b, int *size_a, int *size_b)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	temp = list_a[0];
	if (*size_a == 0)
		return ;
	while (i < *size_b)
	{
		temp2 = list_b[i + 1];
		list_b[i + 1] = temp;
		temp = temp2;
		i++;
	}
	list_b[0] = list_a[0];
	i = 0;
	while (i < *size_a)
	{
		list_a[i] = list_a[i + 1];
		++i;
	}
	list_a[i] = 0;
	++*size_b;
	--*size_a;
}


void	ft_insert(t_list *list, int nbr)
{
	t_list *new;
	new = malloc(sizeof(*new));
	if (list == NULL || new == NULL)
		return ;
	new->content = nbr;
	list->next = new;

}
void	pb(t_list **list_a, t_list **list_b)
{
	if (list_a->content == NULL)
		return ;
	ft_insert(*list_b, list_a->(int)content);
}