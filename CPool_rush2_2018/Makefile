##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	rush2

SRC	=	lib/my/basic.c		\
		lib/my/rush2.c		\
		lib/my/language.c	\
		lib/my/errors.c		\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -pedantic -std=c99 -g -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(NAME)

fclean:		clean
		rm -f $(NAME) $(OBJ)
		rm -f *~
		rm -f include/*~
		rm -f lib/my/*~

re:		fclean all

.PHONY:		all clean fclean re
