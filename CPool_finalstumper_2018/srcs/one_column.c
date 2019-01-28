/*
** EPITECH PROJECT, 2018
** one_column.c
** File description:
** one_column.c
*/

#include "final_stumper.h"

void one_column(char *str, int i, int j)
{
    if (str[i - 2] == 'o')
        my_putstr("[rush1-1] 1 ");
    print_column(str, i, j);
    if (str[i - 2] == 'B') {
        my_putstr("[rush1-3] 1 ");
        my_put_nbr(j);
        my_putstr(" || [rush1-4] 1 ");
        my_put_nbr(j);
        my_putstr(" || [rush1-5] 1 ");
        my_put_nbr(j);
    }
    my_putchar('\n');
}

void print_column(char *str, int i, int j)
{
    if (str[i - 2] == '*')
        my_putstr("[rush1-2] 1 ");
    if (str[i - 2] == '*' || str[i - 2] == 'o')
        my_put_nbr(j);
}
