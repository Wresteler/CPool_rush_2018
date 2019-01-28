/*
** EPITECH PROJECT, 2018
** check_binary.c
** File description:
** check_binary.c
*/

#include "final_stumper.h"

void check_one_charac(char c)
{
    if (c == '*')
        my_putstr("[rush1-2] 1 1\n");
    else if (c == 'B')
        my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
    else
        my_putstr("[rush1-1] 1 1\n");
}

void check_o_star(char *str, int col_one_line)
{
    if (str[col_one_line - 1] == 'o')
        my_putstr("[rush1-1] ");
    if (str[col_one_line - 1] == '*')
        my_putstr("[rush1-2] ");
    if (str[col_one_line - 1] == '*' || str[col_one_line - 1] == 'o') {
        my_put_nbr(col_one_line);
        my_putstr(" 1");
    }
}

void one_line_char(int col_one_line)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(col_one_line);
    my_putstr(" 1 || ");
    my_putstr("[rush1-4] ");
    my_put_nbr(col_one_line);
    my_putstr(" 1 || ");
    my_putstr("[rush1-5] ");
    my_put_nbr(col_one_line);
    my_putstr(" 1");
}

void check_one_line(char *str)
{
    int col_one_line = 0;

    while (str[col_one_line] != '\n')
        col_one_line++;
    check_o_star(str, col_one_line);
    if (str[col_one_line - 1] == 'B')
        one_line_char(col_one_line);
    my_putchar('\n');
}
