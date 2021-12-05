/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/05 17:27:49 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_check_content(int argc, char **list);
int	ft_check_double(int *tab_a, int size);
int	ft_fill_a(int argc, char **argv, int *tab_a);

int	main(int argc, char **argv)
{
	int	*tab_a;
	int	*tab_b;
	int	*size_a;
	int	*size_b;
	int	i;

	i = 0;
	argv++;
	tab_a = malloc(sizeof(int) * argc - 1);
	if (!tab_a)
		return (0);
	tab_b = malloc(sizeof(int) * argc - 1);
	if (!tab_b)
		return (0);
	// tab_b[0] = 123;
	if (ft_fill_a(argc, argv, tab_a) == 0)
	{
		write(1, "erreur dans le tableau", 22);
		return (0);
	}
	size_a = NULL;
	size_b = NULL;
	size_a = ft_lstlen(size_a, argc - 1);
	size_b = ft_lstlen(size_b, 0);
	pb(tab_a, tab_b, &size_a, &size_b);
	i = 0;
	while (tab_a[i])
	{
		printf("tab_a[%d] : %d\n", i, tab_a[i]);
		i++;
	}
	i = 0;
	while (tab_b[i])
	{
		printf("tab_b[%d] : %d\n", i, tab_b[i]);
		i++;
	}
}
