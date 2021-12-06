/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/06 19:00:27 by emaugale         ###   ########.fr       */
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
	t_list *list_a;
	int	i;

	i = 0;
	argv++;
	tab_a = malloc(sizeof(int) * argc - 1);
	if (!tab_a)
		return (0);
	tab_b = malloc(sizeof(int) * argc - 1);
	if (!tab_b)
		return (0);
	if (ft_fill_a(argc, argv, tab_a) == 0)
	{
		write(1, "erreur dans le tableau", 22);
		return (0);
	}
	list_a = ft_lstnew(tab_a);
	whille()
}

