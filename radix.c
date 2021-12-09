/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:14:01 by emaugale          #+#    #+#             */
/*   Updated: 2021/12/09 02:27:34 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static void	radix_first_loop(t_list **a, t_list **b, int i, int *len_x)
{
  int		j;

  j = 0;
  while (j < len_x[0])
    {
      if (((*a)->content >> i & 1) == 0)
        {
          pa(b, a);
          len_x[0] = len_x[0] - 1;
          len_x[1] = len_x[1] + 1;
        }
      else
        {
          ra(a);
          j = j + 1;
        }
    }
}

static void	radix_second_loop(t_list **a, t_list **b, int i, int *len_x)
{
  int		j;

  j = 0;
  while (j < len_x[1])
    {
      if (((*b)->content >> i & 1) == 1)
        {
          pa(a, b);
          len_x[1] = len_x[1] - 1;
          len_x[0] = len_x[0] + 1;
        }
      else
        {
          ra(b);
          j = j + 1;
        }
    }
}

static void    radix_third_loop(t_list **a, t_list **b, int *len_x)
{
  while (0 < len_x[1])
    {
      pa(a, b);
      len_x[1] = len_x[1] - 1;
      len_x[0] = len_x[0] + 1;
    }
}

void  ft_radix(t_list **a, t_list **b, int nbneg)
{
  int           i;
  int           *len_x;

  len_x = malloc(sizeof(int) * 2);
  if (len_x == NULL)
    return;
  len_x[0] = ft_lstsize(*a);
  len_x[1] = 0;
  i = 0;
  while (i < 31)
    {
      radix_first_loop(a, b, i, len_x);
      radix_second_loop(a, b, i, len_x);
      i = i + 1;
    }
  radix_third_loop(a, b, len_x);
  i = 0;
  while (i < nbneg)
    {
      ra(a);
      i = i + 1;
    }
  return;
}