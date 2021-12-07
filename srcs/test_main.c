/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/07 12:03:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_check_double(t_list *list_a);
t_list	**ft_fill_a(int argc, char **argv, t_list **list_a);

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*temp;

	int	i;
	
	i = 0;
	argv++;
	list_a = NULL;
	list_b = NULL;
	if (ft_fill_a(argc, argv, &list_a) == NULL)
	{
		write(1, "erreur dans le tableau\n", 23);
		return (0);
	}
	if (ft_check_double(list_a) == 0)
	{
		write(1, "erreur dans le tableau\n", 23);
		return (0);
	}
	temp = list_a;
	// pb(&temp, &list_b);
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
}

