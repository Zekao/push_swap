/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:54:21 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 14:10:27 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list    *ft_get_next_min(t_list **list_a)
{
    t_list    *head;
    t_list    *min;
    int        has_min;

    min = NULL;
    has_min = 0;
    head = *list_a;
    if (head)
    {
        while (head)
        {
            if ((head->index == -1) && (!has_min || head->content < min->content))
            {
                min = head;
                has_min = 1;
            }
            head = head->next;
        }
    }
    return (min);
}

void    index_stack(t_list **list_a)
{
    
	t_list  *temp;
    int     i;

    i = 0;
	int	size;

	size = ft_lstsize(list_a);
	temp = *list_a;
	while (i < ft_lstsize)
	{
		ft_fill_index_2(temp, i++);
	}
}