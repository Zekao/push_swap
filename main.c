/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/25 19:29:51 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stido.h>

int	main(int argc, char **argv)
{

	//////////////////////////////////////////////////////////////////////////
	/*
	verif de si la liste est bonne 
	char **list;
	list = argv;
	printf("%d\n", ft_check_content(argc, list)); */
	//////////////////////////////////////////////////////////////////////////
	/*
	verif de si il y a pas de doublon printf("%d\n", ft_check_double(list));
	char *list;
	list = argv[1];
	*/
	//////////////////////////////////////////////////////////////////////////
	int	*list_a;

	list_a = malloc(sizeof(int) * argc);
	argv++;
	ft_fill_a(argc, argv, list_a);

}
