/*                                                                                                                                                                                                                 
** pushswap.h for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                        
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Thu Dec  4 13:42:31 2014 thanh-truc hoang                                                                                                                                                           
** Last update Fri Dec 12 13:44:03 2014 thanh-truc hoang                                                                                                                                                           
*/

#include <unistd.h>
#include <stdlib.h>

#ifndef _PUSHSWAP_H_
#define _PUSHSWAP_H_

typedef struct          s_list
{
  int           nbr;
  struct s_list *nxt;
}               t_list;

void    my_putchar(char c);
int     add_elem(t_list **l_a, int nbr);
int     my_show_list(t_list *l);
int     my_list_len(t_list *l);
int     my_getnbr(char *str);
int     my_putnbr(int nbr);
int     main(int ac, char **av);
int     swap_sa(t_list **l_a);
int     swap_sb(t_list **l_b);
int     swap_pa(t_list **l_a, t_list **l_b);
int     swap_pb(t_list **l_a, t_list **l_b);
void    sort_out(t_list **l_a, t_list **l_b);
int     first_step(t_list **l_a, t_list **l_b);
int     sec_step(t_list **l_a, t_list **l_b);

#endif
