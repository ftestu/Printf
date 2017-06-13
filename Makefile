##
## Makefile for  in /home/AmOrAA/Delivery/Printf/Test
## 
## Made by Florian Testu
## Login   <AmOrAA@epitech.net>
## 
## Started on  Thu Nov 17 10:16:57 2016 Florian Testu
## Last update Sun Nov 27 21:38:37 2016 Florian Testu
##

CC      =       gcc

LIB     =       libmy.a

SRCS    =       my_printf.c		\
                Fonc.c			\
		Foncput.c		\
		Fonflags.c		\
		lib.c			\
		Flag2.c

OBJS    =       $(SRCS:.c=.o)


all:            $(LIB)

$(LIB):         $(OBJS)
	ar rc $(LIB)  $(OBJS)

clean:
	rm -f $(LIB) $(OBJS)

fclean: clean
	rm -f $(LIB)

re:     fclean all
