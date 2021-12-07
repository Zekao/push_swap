/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:16:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/07 16:04:39 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(t_list *list_a)
{
	t_list	*list_temp;

	while (list_a)
	{
		list_temp = list_a->next;
		while (list_temp)
		{
			if (list_a->content == list_temp->content)
				return (0);
			list_temp = list_temp->next;
		}
		list_a = list_a->next;
	}
	return (1);
}

t_list	**ft_fill_a(int argc, char **argv, t_list **tab_a)
{
	int	i;
	char	**newargv;

	i = 0;
	if (argc > 2)
	{
		while (i != argc - 1)
		{
			if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
					return (NULL);
			else
			{
				ft_lstadd_back(tab_a, ft_lstnew(ft_atoi(argv[i])));
				i++;
			}
		}
	}
	else if (argc == 2)
	{
		newargv = ft_split(argv[0], ' ');
		while (newargv[i])
			i++;
		tab_a = ft_fill_a(i + 1, newargv, tab_a);
		free (newargv);
	}
	return (tab_a);
}
