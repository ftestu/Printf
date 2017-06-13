/*
** Fonc.c for  in /home/AmOrAA/Delivery/Printf/Test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Nov 15 12:57:26 2016 Florian Testu
** Last update Mon Jan 16 20:01:03 2017 Florian Testu
*/

#include "./include/my.h"

void	fc(char z)
{
  write(1, &z, 1);
}

void	fs(char *str)
{
  int	b;

  b = 0;
  while (str[b] != '\0')
    {
      my_putchar(str[b]);
      b = b + 1;
    }
}

void	fk(char z)
{
  my_putchar('%');
}

void	fd(int nb)
{
  int div;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  div = 1;
  while (nb / div > 9)
    {
      div *= 10;
    }
  while (div != 0)
    {
      my_putchar((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}

void	fu(unsigned int nb)
{
  unsigned int div;

  div = 1;
  while (nb / div > 9)
    {
      div *= 10;
    }
  while (div != 0)
    {
      my_putchar((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}
