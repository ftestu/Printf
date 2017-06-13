/*
** Fonflags.c for  in /home/AmOrAA/Delivery/Printf/Test/PSU_2016_my_printf/PSU_2016_my_printf
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Nov 17 16:15:23 2016 Florian Testu
** Last update Sun Nov 20 14:15:49 2016 Florian Testu
*/

#include <stdio.h>
#include "./include/my.h"

void	fp(void *nb)
{
  int	i;

  i = nb;
  my_putstr("0x");
  fx(nb);
}
