/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:26:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/28 03:20:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_check_content(int argc, char **list);
int	ft_check_double(int *list);
void	ft_fill_a(int argc, char **argv, int *tab_a);

int	main(int argc, char **argv)
{
	int	*tab_a;
	int	i;

	i = 0;
	argv++;
	tab_a = malloc(sizeof(int) * argc - 1);
	if (!tab_a)
		return (0);
	ft_fill_a(argc, argv, tab_a);
	printf("valeurs de mon tableau : \n--------------------------------\n");
	while (tab_a[i])
	{
		printf("tab[i] : %d\n", tab_a[i]);
		i++;
	}
	printf("--------------------------------\n");
	printf("Verification de si il y a des doublons (1 = ok & 0 = doublon): %d\n", ft_check_double(tab_a));
	printf("Verification du contenu (1 = ok & 0 = autre chose qu'un nombre): %d\n", ft_check_content(argc-1, argv));
}
