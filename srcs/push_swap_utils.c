/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:26:26 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/07 20:55:27 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int64_t	ft_atoi(const char *str)
{
	int			i;
	long long	r;
	int			verif;

	r = 0;
	verif = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			verif = -verif;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (2147843648);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	if ((str[i] < '0' && str[i]) || (str[i] > '9' && str[i]))
		return (2147843648);
	return (r * verif);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastelem;

	if (lst)
		while (lst->next)
			lst = lst->next;
	lastelem = lst;
	return (lastelem);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!(*alst))
		*alst = new;
	else
	{
		tmp = ft_lstlast(*(alst));
		tmp->next = new;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
	{
		new->next = *alst;
	}
	*alst = new;
}
