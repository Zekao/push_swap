/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:26:26 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 19:31:00 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!(newlist))
		return (NULL);
	newlist->content = content;
	newlist->index = index;
	newlist->next = NULL;
	return (newlist);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	ft_lst_sorted(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp && tmp->next != NULL)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (1);
	}
	return (0);
}

int	ft_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	return (0);
}
