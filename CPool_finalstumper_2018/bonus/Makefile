##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	rush3

NAME_T	=	unit_tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I../include/

CFLAGS	+=	-W -Wall -Wextra

SRCS_T	=	../srcs/errors.c			\
		../srcs/rush3.c			\
		../srcs/check_binary.c		\
		../srcs/check_binary_two_charac.c	\
		../srcs/basics.c			\
		../srcs/one_column.c		\
		../tests/tests_our_rush3.c

OBJS_T	=	$(SRCS_T:.c=.o)

T_FLAGS =	-lcriterion --coverage

all:		$(NAME)

$(NAME):	$(OBJS_T)
		$(CC) -o $(NAME_T) $(OBJS_T) $(T_FLAGS)
clean:
		$(RM) $(OBJS_T)

fclean:		clean
		$(RM) $(NAME_T)

re:		fclean all

.PHONY:		all clean fclean re
