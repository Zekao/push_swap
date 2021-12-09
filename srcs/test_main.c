/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 02:57:27 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list	**ft_fill_a(int argc, char **argv, t_list **list_a);

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*temp;
	int			neg;

	argv++;
	list_a = NULL;
	list_b = NULL;
	if (ft_fill_a(argc, argv, &list_a) == NULL || ft_check_double(list_a) == 0)
		return(ft_error("Error\n"));
	if (ft_lst_sorted(&list_a) == 0)
		return (0);
	argc = ft_lstsize(list_a);
	index_stack(&list_a);
	neg = ft_lstsize_neg(list_a);
	if (argc > 5)
	{
		// ft_radix_sort(&list_a, &list_b, neg);
		ft_radix(&list_a, &list_b, neg);
	}
	if (argc == 5)
		ft_sort_five(argc, &list_a, &list_b);
	if (argc == 4)
		ft_sort_four(argc, &list_a, &list_b);
	temp = list_a;
	printf("nombre d'arguments : %d\n", argc);
	if (argc == 3)
		hardcode_sort(&temp);
	if (argc == 2)
		ft_sort_two(&list_a);
	printf("----- liste a \n");
	while (temp)
	{
		printf("%d\n", (int)temp->content);
		temp = temp->next;
	}
	printf("----- liste b \n");
	while (list_b)
	{
		printf("%d\n", list_b->content);
		list_b = list_b->next;
	}
	printf("contenu du premier element : %d\n", list_a->content);
	while (list_a && list_a->next)
		list_a = list_a->next;
	printf("contenu du dernier element : %d\n", list_a->content);
}
