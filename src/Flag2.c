/*
** test.c for  in /home/AmOrAA/Delivery/Printf/Test/PSU_2016_my_printf/PSU_2016_my_printf
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Fri Nov 18 15:32:36 2016 Florian Testu
** Last update Sat Nov 19 19:51:39 2016 Florian Testu
*/

#include "./include/my.h"

char    *my_strcpy(char *dest, char *src)
{
  int a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}

void	fS(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 127)
	{
	my_putchar(92);
	fo(str[i]);
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
}
