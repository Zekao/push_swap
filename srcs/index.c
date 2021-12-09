/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:54:21 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 17:57:30 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_stack(t_list **list_a)
{
    
	t_list  *temp;
    int     i;
	int	size;

    i = 0;
	temp = *list_a;
	size = ft_lstsize(temp);
	while (i < size)
		ft_fill_index_2(temp, i++);
}