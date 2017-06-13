/*
** Foncput.c for  in /home/AmOrAA/Delivery/Printf/Test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Wed Nov 16 19:09:47 2016 Florian Testu
** Last update Mon Jan 16 20:05:03 2017 Florian Testu
*/

#include "./include/my.h"

void    *my_revstr(char *str)
{
  int c;
  int a;
  char d;

  c = 0;
  while (str[c] != '\0')
    {
      c = c + 1;
    }
  a = 0;
  d = str[c];
  c = c - 1;
  while (c >= a)
    {
      d = str[c];
      str[c] = str[a];
      str[a] = d;
      c = c - 1;
      a = a + 1;
    }
}

void	fo(int nbr)
{
  int	mod;
  int	result;
  char	*str;
  int	oct;
  int	i;

  if (str = malloc(sizeof(char) * 32) == NULL)
    exit (84);
  i = 0;
  mod = 0;
  result = 0;
  oct = 8;
  while (nbr != 0)
    {
      mod = nbr % oct;
      nbr = nbr / oct;
      str[i++] = mod + 48;
    }
  my_revstr(str);
  my_putstr(str);
  free(str);
}

void	fb(int nbr)
{
  int	mod;
  int	result;
  char	*str;
  int	i;
  int 	bin;

  if (str = malloc(sizeof(char) * 32) == NULL)
    exit (84);
  i = 0;
  mod = 0;
  result = 0;
  bin = 2;
  while (nbr != 0)
    {
      mod = nbr % bin;
      nbr = nbr / bin;
      str[i++] = mod + 48;
    }
  my_revstr(str);
  my_putstr(str);
  free(str);
}

void	fX(int nbr)
{
  int	mod;
  int   result;
  char  *str;
  int	i;
  int	hex;

  if (str = malloc(sizeof(char) * 32) == NULL)
    exit (84);
  i = 0;
  mod = 0;
  result = 0;
  hex = 16;
  while (nbr != 0)
    {
      mod = nbr % hex;
      nbr = nbr / hex;
      if (mod > 9)
      	{
      	  str[i++] = mod + 55;
      	}
      else
	str[i++] = mod + 48;
    }
  my_revstr(str);
  my_putstr(str);
  free(str);
}

void	fx(int nbr)
{
  int   mod;
  int   result;
  char  *str;
  int   i;
  int   hexa;

  if (str = malloc(sizeof(char) * 32) == NULL)
    exit (84);
  i = 0;
  mod = 0;
  result = 0;
  hexa = 16;
  while (nbr != 0)
    {
      mod = nbr % hexa;
      nbr = nbr / hexa;
      if (mod > 9)
	{
	  str[i++] = mod + 87;
	}
      else
	str[i++] = mod + 48;
    }
  my_revstr(str);
  my_putstr(str);
  free(str);
}
