/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:16:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 20:56:44 by emaugale         ###   ########.fr       */
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

t_list	**ft_fill_a(int ac, char **av, t_list **tab_a)
{
	int		i;
	int		j;
	char	**newav;

	i = 0;
	j = 0;
	if (ac > 2)
	{
		while (i != ac - 1)
		{
			if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
				return (NULL);
			ft_lstadd_back(tab_a, ft_lstnew(ft_atoi(av[i++]),
					ft_atoi(av[j++])));
		}
	}
	else if (ac == 2)
	{
		newav = ft_split(av[0], ' ');
		while (newav[i])
			i++;
		tab_a = ft_fill_a(i + 1, newav, tab_a);
		free (newav);
	}
	return (tab_a);
}

void	ft_fill_index(t_list *tab_a)
{
	int	i;

	i = -1;
	while (tab_a)
	{
		tab_a->index = i;
		tab_a = tab_a->next;
	}
}
