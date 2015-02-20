/*                                                                                                                                                                                                                 
** request.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                         
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Fri Dec  5 13:06:23 2014 thanh-truc hoang                                                                                                                                                           
** Last update Sat Dec 13 09:36:29 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "pushswap.h"

int             swap_sa(t_list **l_a)
{
  t_list        *tmp;

  if (*l_a == NULL)
    return (0);
  else
    {
      tmp = *l_a;
      *l_a = (*l_a)->nxt;
      tmp->nxt = (*l_a)->nxt;
      (*l_a)->nxt = tmp;
    }
  my_putstr("sa ");
  return (0);
}

int             swap_sb(t_list **l_b)
{
  t_list        *tmp;

  if (*l_b == NULL)
    return (0);
  else
    {
      tmp = *l_b;
      *l_b = (*l_b)->nxt;
      tmp->nxt = (*l_b)->nxt;
      (*l_b)->nxt = tmp;
    }
  my_putstr("sb ");
  return (0);
}

int             swap_pa(t_list **l_a, t_list **l_b)
{
  t_list        *tmp;

  if (*l_b == NULL)
    return (0);
  else
    {
      tmp = *l_b;
      *l_b = (*l_b)->nxt;
      tmp->nxt = *l_a;
      *l_a = tmp;
    }
  my_putstr("pa ");
  return (0);
}

int             swap_pb(t_list **l_a, t_list **l_b)
{
  t_list        *tmp;

  if (*l_a == NULL)
    return (0);
  else
    {
      tmp = *l_a;
      *l_a = (*l_a)->nxt;
      tmp->nxt = *l_b;
      *l_b = tmp;
    }
  my_putstr("pb ");
  return (0);
}
