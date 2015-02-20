/*                                                                                                                                                                                                                 
** sort_out.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap/libmy                                                                                                                                                  
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Mon Dec  8 14:55:29 2014 thanh-truc hoang                                                                                                                                                           
** Last update Sat Dec 13 10:41:44 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "../include/pushswap.h"

int             my_list_len(t_list *l)
{
  int           i;

  i = 0;
  while (l != NULL)
    {
      l = l->nxt;
      i++;
    }
  return (i);
}

int             first_step(t_list **l_a, t_list **l_b)
{
  while (my_list_len(*l_a) > 2)
    {
      if ((*l_a)->nbr > (*l_a)->nxt->nbr)
        {
          swap_sa(l_a);
          swap_pb(l_a, l_b);
          if (my_list_len(*l_b) > 1)
            if ((*l_b)->nbr < (*l_b)->nxt->nbr)
              swap_sb(l_b);
        }
      else
        swap_pb(l_a, l_b);
    }
}

int             sec_step(t_list **l_a, t_list **l_b)
{
  while ((*l_b)->nxt != NULL)
    {
      if ((*l_b)->nbr > (*l_b)->nxt->nbr)
        {
          swap_pa(l_a, l_b);
          if ((*l_a)->nbr > (*l_a)->nxt->nbr)
            swap_sa(l_a);
        }
      else
        {
          swap_sb(l_b);
          swap_pa(l_a, l_b);
          if ((*l_a)->nbr > (*l_a)->nxt->nbr)
            swap_sa(l_a);
        }
    }
  swap_pa(l_a, l_b);
  if ((*l_a)->nbr > (*l_a)->nxt->nbr)
    swap_sa(l_a);
}

void            sort_out(t_list **l_a, t_list **l_b)
{
  if (my_list_len(*l_a) > 2)
    first_step(l_a, l_b);
  if (my_list_len(*l_a) == 2)
    {
      if ((*l_a)->nbr > (*l_a)->nxt->nbr)
        swap_sa(l_a);
      if (*l_b != NULL)
        sec_step(l_a, l_b);
    }
}
