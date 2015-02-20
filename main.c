/*                                                                                                                                                                                                                 
** pushswap.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                        
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Wed Dec  3 19:20:24 2014 thanh-truc hoang                                                                                                                                                           
** Last update Sat Dec 27 16:36:59 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "pushswap.h"

int             add_elem(t_list **l_a, int nbr)
{
  t_list        *elem;

  elem = malloc(sizeof (*elem));
  if (elem == NULL)
    return (1);
  elem->nbr = nbr;
  elem->nxt = *l_a;
  *l_a = elem;
  return (0);
}

int             my_show_list(t_list *l)
{
  while (l != NULL)
    {
      my_putnbr(l->nbr);
      l = l->nxt;
      my_putchar(' ');
    }
  return (0);
}

int             main(int ac, char **av)
{
  t_list        *l_a;
  t_list        *l_b;

  l_a = NULL;
  l_b = NULL;
  ac = ac - 1;
  if (ac == 0)
    return (0);
  while (ac != 0)
    {
      add_elem(&l_a, my_getnbr(av[ac]));
      ac--;
    }
  sort_out(&l_a, &l_b);
  my_putchar('\n');
  my_show_list(l_a);
  my_putchar('\n');
}
