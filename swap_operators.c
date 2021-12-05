/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:54:31 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/05 18:36:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_swap(int *a, int *b);

// void	sa(int *tab_a)
// {
// 	if (tab_a[0] && tab_a[1])
// 	{
// 		ft_swap(&tab_a[0], &tab_a[1]);
// 		write(1, "sa\n", 3);
// 	}
// }

// void	sb(int *tab_b)
// {
// 	if (tab_b[0] && tab_b[1])
// 	{
// 		ft_swap(&tab_b[0], &tab_b[1]);
// 		write(1, "sb\n", 3);
// 	}
// }

// void	ss(int *tab_a, int *tab_b)
// {
// 	sa(tab_a);
// 	sb(tab_b);
// }

void	sa(t_list *list_a)
{
	int	elem_temp;

	if (!list_a || list_a->next)
		return ;
	elem_temp = list_a->content;
	list_a->content = list_a->next->content;
	list_a->next->content = elem_temp;
}

void	sa(t_list *list_b)
{
	int	elem_temp;

	if (!list_b || list_b->next)
		return ;
	elem_temp = list_b->content;
	list_b->content = list_b->next->content;
	list_b->next->content = elem_temp;
}

void	ss(t_list list_a, t_list list_b)
{
	sa(list_a);
	sb(list_b);
}