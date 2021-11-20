/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:16:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 17:24:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_content(int argc, char **list)
{
	int	i;
	int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (list[i][j])
		{
			if (list[i][j] == '-' && ft_isdigit(list[i][j - 1]) == 0)
				j++;
			if (ft_isdigit(list[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_double(int *list)
{
	int	i;
	int	j;
	int	size;

	size = ft_lstlen(list);
	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (list[i] != list[j] && j <= size)
			j++;
		if (list[i] == list[j] && j <= size)
			return (0);
		i++;
	}
	return (1);
}

int	ft_fill_a(int argc, char **argv, int *tab_a)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i != argc - 1)
	{
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
			return (0);
		else
		{
			tab_a[j] = ft_atoi(argv[i]);
			i++;
			j++;
		}
	}
	return (1);
}
