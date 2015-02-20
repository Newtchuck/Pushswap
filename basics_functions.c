/*                                                                                                                                                                                                                 
** basics_functions.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                      
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Mon Dec  8 11:09:38 2014 thanh-truc hoang                                                                                                                                                           
** Last update Mon Dec  8 11:43:05 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "pushswap.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_putstr(char *str)
 {
  int   i;
  
  i = 0;
  while (str[i] != '\0')
    my_putchar(str[i++]);
  return (0);
 }

