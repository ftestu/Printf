/*
** lib.c for  in /home/AmOrAA/Delivery/Printf/Test/PSU_2016_my_printf/PSU_2016_my_printf
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Nov 17 18:29:16 2016 Florian Testu
** Last update Thu Nov 17 18:36:20 2016 Florian Testu
*/

#include "./include/my.h"

void    my_putchar(char z)
{
  write(1, &z, 1);
}

void    my_putstr(char *str)
{
  int   b;

  b = 0;
  while (str[b] != '\0')
    {
      my_putchar(str[b]);
      b = b + 1;
    }
}

void    my_putchar2(char z)
{
  my_putchar('%');
}

void    my_putnbr(int nb)
{
  int div;

  if (nb < 0)
    {
      fc('-');
      nb = nb * -1;
    }
  div = 1;
  while (nb / div > 9)
    {
      div *= 10;
    }
  while (div != 0)
    {
      fc((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}

int     my_strlen(char *a)
{
  int   b;

  b = 0;
  while (a[b] != '\0')
    {
      b = b + 1;
    }
}
