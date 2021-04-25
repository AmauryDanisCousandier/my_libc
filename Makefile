#!/bin/bash

NAME	= libmy.a

RM		= rm -f

SRCS	=	./lib/starter_pack/my_putchar.c				\
			./lib/starter_pack/my_putstr.c				\
			./lib/starter_pack/my_put_nbr.c				\
			./lib/starter_pack/my_strlen.c				\
			./lib/starter_pack/my_putstr_array.c		\
			./lib/starter_pack/my_strcat.c				\
			./lib/starter_pack/my_strcpy.c				\
			./lib/starter_pack/my_strncmp.c				\
			./lib/starter_pack/my_strcmp.c				\
			./lib/starter_pack/strn_to_word_array.c		\
			./lib/starter_pack/my_getnbr.c				\
			./lib/starter_pack/my_str_to_word_array.c	\
			./lib/starter_pack/char_tester.c			\
			./lib/starter_pack/anti_four_four.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		rm lib/starter_pack/*.o

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all