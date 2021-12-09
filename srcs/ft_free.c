/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:45:39 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 20:47:53 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list *list_a)
{
	t_list	*tmp;

	while (list_a)
	{
		tmp = list_a->next;
		free(list_a);
		list_a = tmp;
	}
}
