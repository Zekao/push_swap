/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/20 17:15:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_check_content(int argc, char **list);
int	ft_check_double(int *list);
int	ft_fill_a(int argc, char **argv, int *tab_a);

int	main(int argc, char **argv)
{
	int	*tab_a;
	int	*tab_b;
	int	i;

	i = 0;
	argv++;
	tab_a = malloc(sizeof(int) * argc - 1);
	if (!tab_a)
		return (0);
	tab_b = malloc(sizeof(int) * argc - 1);
	if (!tab_b)
		return (0);
	tab_b[0] = 0;
	tab_b[1] = 1;
	if (ft_fill_a(argc, argv, tab_a) == 0)
	{
		write(1, "erreur dans le tableau", 22);
		return (0);
	}
	printf("valeurs de mon tableau : \n--------------------------------\n");
	while (tab_a[i])
	{
		printf("tab_a[%d] : %d\n", i, tab_a[i]);
		i++;
	}
	printf("--------------------------------\n");
	// printf("Verification de si il y a des doublons (1 = ok & 0 = doublon): %d\n", ft_check_double(tab_a));
	// printf("Verification du contenu (1 = ok & 0 = autre chose qu'un nombre): %d\n", ft_check_content(argc-1, argv));
	// sa(tab_a);
	// printf("valeurs de mon tableau après avoir swap a : \n--------------------------------\n");
	// i = 0;
	// while (tab_a[i])
	// {
	// 	printf("tab[%d] : %d\n", i, tab_a[i]);
	// 	i++;
	// }
	pa(tab_a, tab_b);
	printf("valeurs de mon tableau après avoir push a : \n--------------------------------\n");
	i = 0;
	while (tab_a[i])
	{
		printf("tab_a[%d] : %d\n", i, tab_a[i]);
		i++;
	}
	i = 0;
	while (tab_b[i])
	{
		printf("tab_b[%d] : %d\n", i, tab_a[i]);
		i++;
	}
}
