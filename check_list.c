/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:16:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/05 17:25:54 by emaugale         ###   ########.fr       */
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

int	ft_check_double(int *tab_a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (tab_a[i] != tab_a[j] && j < size - 1)
			j++;
		if (tab_a[i] == tab_a[j] && j < size - 1)
			return (1);
		i++;
	}
	return (0);
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

int	ft_fill_test(int argc, int *tab_b)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i != argc - 1)
	{
		tab_b[j] = 0;
		i++;
		j++;
	}
	return (1);
}
