/*                                                                                                                                                                                                                 
** my_putnbr.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                       
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Sat Dec  6 14:26:43 2014 thanh-truc hoang                                                                                                                                                           
** Last update Mon Dec  8 11:43:22 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "pushswap.h"

int     my_putnbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  if (nbr > 9)
    {
      my_putnbr(nbr / 10);
      my_putchar((nbr % 10) + 48);
    }
  else
    my_putchar('0' + nbr);
}
