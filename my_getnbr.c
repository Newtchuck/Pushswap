/*                                                                                                                                                                                                                 
** my_getnbr.c for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                       
**                                                                                                                                                                                                                 
** Made by thanh-truc hoang                                                                                                                                                                                        
** Login   <hoang_t@epitech.net>                                                                                                                                                                                   
**                                                                                                                                                                                                                 
** Started on  Sat Dec  6 14:29:23 2014 thanh-truc hoang                                                                                                                                                           
** Last update Fri Dec 12 10:51:35 2014 thanh-truc hoang                                                                                                                                                           
*/

#include "../include/pushswap.h"

int     my_getnbr(char *str)
{
  int   sign;
  int   res;

  sign = 1;
  res = 0;
  while (*str != 0 && (*str == '+' || *str == '-'))
    {
      if (*str == '-')
        sign = sign * -1;
      str = str + 1;
    }
  while (*str != 0 && (*str >= '0' && *str <= '9'))
    {
      res = res * 10;
      res = res + (*str - '0');
      str = str + 1;
    }
  return (sign * res);
}






