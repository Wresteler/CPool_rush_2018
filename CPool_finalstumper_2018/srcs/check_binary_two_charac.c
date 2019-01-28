/*
** EPITECH PROJECT, 2018
** check_binary_two_charac.c
** File description:
** check_binary_two_charac.c
*/

#include "final_stumper.h"

void check_two_charac(char *str, int i)
{
    for (; str[i] != 0; i++);
    if (str[i - 2] == 'C')
        my_putstr("[rush1-4] ");
    else
        my_putstr("[rush1-5] ");
}

void two_by_two(char *str, int i, int j)
{
    int k = 0;
    i = 0;

    for (; str[i] != '\n'; i++);
    print_two_by_two(str, i);
    if (str[i - 1] == 'A')
        my_putstr("[rush1-3] ");
    else if (str[i - 1] == 'C')
        check_two_charac(str, k);
    my_put_nbr(i);
    my_putchar(' ');
    my_put_nbr(j);
    my_putchar('\n');
}

void print_two_by_two(char *str, int i)
{
    if (str[i - 1] == 'o')
        my_putstr("[rush1-1] ");
    if (str[i - 1] == 92)
        my_putstr("[rush1-2] ");
}
