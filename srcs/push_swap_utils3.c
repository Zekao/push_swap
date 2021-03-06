/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:26:26 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 19:31:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max(t_list *lst)
{
	t_list	*maximum;
	t_list	*tmp;

	maximum = lst;
	tmp = lst;
	while (tmp)
	{
		if (maximum->content < tmp->content)
			maximum = tmp;
		tmp = tmp->next;
	}
	return (maximum->content);
}

int	ft_find_min(t_list *lst)
{
	t_list	*minimum;
	t_list	*tmp;

	minimum = lst;
	tmp = lst;
	while (tmp)
	{
		if (minimum->content > tmp->content)
			minimum = tmp;
		tmp = tmp->next;
	}
	return (minimum->content);
}

void	ft_free_list(t_list **list_a)
{
	t_list	*temp;
	t_list	*temp2;

	temp2 = *list_a;
	while (list_a)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	free(list_a);
}

int	ft_lstsize_neg(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->content < 0)
			i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_fill_index_2(t_list *lst, int i)
{
	t_list	*minimum;
	t_list	*tmp;

	minimum = lst;
	while (minimum->index != -1)
		minimum = minimum->next;
	tmp = lst;
	while (tmp)
	{
		if (tmp->index == -1 && minimum->content > tmp->content)
			minimum = tmp;
		tmp = tmp->next;
	}
	minimum->index = i;
}
