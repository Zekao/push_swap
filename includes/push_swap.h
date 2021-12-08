/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:19:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/08 02:57:06 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

int		ft_isdigit(int c);
int64_t	ft_atoi(const char *str);
/*  OPERATORS OF MY PUSH SWAP */
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	ra(t_list **list_a);
void	rr(t_list **list_a, t_list **list_b);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
/* linked array functions */
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_prelast(t_list *list_a);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void *));
int		ft_check_double(t_list *list_a);
int		ft_find_min(t_list *lst);
int		ft_lst_sorted(t_list **lst);
void	ft_sort_five(int argc, t_list **list_a, t_list **list_b);
void	ft_sort_four(int argc, t_list **list_a, t_list **list_b);
void	ft_sort_two(t_list **list_a);
/* libft functions */
char	**ft_split(char *str, char sep);
/*  Sort functions */
void	hardcode_sort(t_list **list_a);

#endif
