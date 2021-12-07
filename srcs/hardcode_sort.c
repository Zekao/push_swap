/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:27:28 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/07 15:48:23 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hardcode_sort(t_list   **list_a)
{
	t_list	*temp;

	int	val_1;
	int	val_2;
	int	val_3;
	
	temp = *list_a; 	
	val_1 = temp->content;
	val_2 = temp->next->content;
	val_3 = temp->next->next->content;
	if (val_1 > val_2 && val_1 < val_3 && val_2 < val_3)
		sa(list_a);
	else if (val_1 > val_2 && val_2 > val_3 && val_1 > val_3)
	{
		sa(list_a);
		rra(list_a);
	}
	else if (val_1 > val_2 && val_1 > val_3 && val_2 < val_3)
		ra(list_a);
	else if (val_1 < val_2 && val_1 < val_3 && val_2 > val_3)
	{
		sa(list_a);
		ra(list_a);
	}
	else if (val_1 > val_3 && val_1 < val_2 && val_2 > val_3)
		rra(list_a);
	else
		return ;
}