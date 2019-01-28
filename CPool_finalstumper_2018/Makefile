##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	rush3

SRC	=	main.c				\
		srcs/rush3.c			\
		srcs/check_binary.c		\
		srcs/check_binary_two_charac.c	\
		srcs/basics.c			\
		srcs/one_column.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -Wall -Wextra -pedantic -std=c99 -g

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME) $(OBJ)
		rm -f *~
		rm -f srcs/*~
		rm -f include/*~
		rm -f vgcore*

re:		fclean all

.PHONY:		all clean fclean re
