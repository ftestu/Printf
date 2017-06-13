/*
** my_printf.c for  in /home/AmOrAA/Delivery/Printf/Test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Nov 15 12:12:42 2016 Florian Testu
** Last update Mon Jan 16 20:01:28 2017 Florian Testu
*/

#include "./include/my.h"

void    my_printf(const char *format, ...)
{
  va_list k;
  int   i;
  int   j;
  char *str;
  void  (*tab[12])(void *) = {&fc, &fs, &fd, &fd, &fk, &fb,
			      &fo, &fX, &fx, &fp, &fu ,&fS}

  str = "csdi%boXxpuS";
  i = 0;
  va_start(k, format);
  while (format[i] != '\0')
    {
      j = 0;
      if (format[i] == '%' && j < 12)
	{
	  while (format[i + 1] != str[j])
	    j = j + 1;
	  tab[j](va_arg(k, void *));
	  i = i + 1;
	}
      else
	  my_putchar(format[i]);
      i = i + 1;
    }
  va_end(k);
}
