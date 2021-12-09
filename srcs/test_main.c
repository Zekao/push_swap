/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 19:56:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list	**ft_fill_a(int argc, char **argv, t_list **list_a);

int	main(int argc, char **argv)
{
	t_list		*list_a;
	t_list		*list_b;

	argv++;
	list_a = NULL;
	list_b = NULL;
	if (ft_fill_a(argc, argv, &list_a) == NULL || ft_check_double(list_a) == 0)
		return (ft_error("Error\n"));
	if (ft_lst_sorted(&list_a) == 0)
		return (0);
	argc = ft_lstsize(list_a);
	ft_fill_index(list_a);
	index_stack(&list_a);
	if (argc > 5)
		ft_radix_sort(&list_a, &list_b);
	if (argc == 5)
		ft_sort_five(argc, &list_a, &list_b);
	if (argc == 4)
		ft_sort_four(argc, &list_a, &list_b);
	if (argc == 3)
		hardcode_sort(&list_a);
	if (argc == 2)
		ft_sort_two(&list_a);
	ft_free(list_a);
}
