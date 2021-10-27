/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:19:54 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/25 19:29:46 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	pa(int *list_a, int *list_b);
void	pb(int *list_a, int *list_b);
int		*sa(int *list_a);
int		*sb(int *list_b);
void	ss(int *list_a, int *list_b);
void	ft_swap(int *a, int *b);
int		ft_strlen(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);

#endif
