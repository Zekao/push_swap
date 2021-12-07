/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:42:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/07 15:09:04 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_prelast(t_list *list_a)
{
	t_list *prelastelem;
	
	if (list_a && list_a->next)
		while (list_a->next->next)
			list_a = list_a->next;
	prelastelem = list_a;
	return (prelastelem);
}

void	rra(t_list **list_a)
{
	t_list	*temp;

	// temp = *list_a;
	// *list_a = temp->next;
	// temp->next = NULL;
	// ft_lstadd_front(list_a, temp);


	temp = ft_prelast(*list_a);//Avt dernier element
	ft_lstlast(*list_a)->next = *list_a;//Dernier element pointe sur l'ancien premier
	*list_a = temp->next;//On met a jour le premier element de notre liste
	temp->next = NULL;
	write(1, "rra\n", 4);

}

void	rrb(t_list **list_b)
{
	t_list	*temp;

	temp = *list_b;
	*list_b = temp->next;
	temp->next = NULL;
	ft_lstadd_front(list_b, temp);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a);
	rrb(list_b);
}
