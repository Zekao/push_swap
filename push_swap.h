/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:19:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/06 12:12:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;


/* void	pa(int *list_a, int *list_b, int *size_a, int *size_b);
void	pb(int *list_a, int *list_b, int *size_a, int *size_b);
void	sa(int *list_a);
void	sb(int *list_b);
void	ss(int *list_a, int *list_b);
void	ra(int *list_a, int size);
void	rb(int *list_b, int size);
void	rra(int *list_a);
void	rr(int *list_a, int *list_b);
void	rrr(int *list_a, int *list_b);
int		ft_strlen(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
void	ft_swap(int *a, int *b);    
int		*ft_lstlen(int *list, int size); */ //old prototype for my old version of push_swap

void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	ra(t_list **list_a);
void	rr(t_list **list_a, t_list **list_b);
void	sa(t_list *list_a);
void	sb(t_list *list_b);
void	ss(t_list *list_a, t_list *list_b);
t_list	*ft_lstnew(void *content);

#endif
