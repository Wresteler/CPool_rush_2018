/*
** EPITECH PROJECT, 2019
** tree.c
** File description:
** tree.c
*/

#include "tree.h"

int place_trunk(int size, int j, int line_size , int k)
{
    int i = 0;

    if (size % 2 == 1)
        size--;
    i = size - (size / 2);
    if (size == 1)
        for (; j != (line_size / 2) - k; j++)
            my_putchar(' ');
    if (size != 1)
        for (; j != (line_size / 2) - k - i; j++)
            my_putchar(' ');
    return (k);
}

int make_trunk(int size, int line_size, int k)
{
    int j = 0;
    int a = 0;
    int m = 0;

    if (size % 2 == 0)
        m = size + 1;
    else
        m = size;
    for (int i = 0; i != size; i++) {
        a = place_trunk(size, j, line_size, a);
        for (k = 0; k != m; k++)
            my_putchar('|');
        my_putchar('\n');
        j = 0;
        a = 0;
    }
    return (0);
}

int make_line_branch(int total_line_size, int total_star)
{
    for (int j = 0; j < (total_line_size); j++)
        my_putchar(' ');
    for (int k = 0; k < total_star; k++)
        my_putchar('*');
    my_putchar('\n');
    return (0);
}

int make_branch(int branch_number, int total_line_size, int total_star)
{
    int decrement = 2;

    if (branch_number < 3 && branch_number != 0)
        total_star -= 2;
    if (((branch_number - 1) % 2 == 0) && branch_number > 1)
        decrement = branch_number + 1;
    if (((branch_number - 1) % 2 == 1) && branch_number > 1)
        decrement = branch_number;
    if (branch_number > 2)
        total_star -= decrement;
    total_line_size -= (total_star - 1) / 2;
    for (int i = 0; i < (4 + branch_number); i++) {
        make_line_branch(total_line_size, total_star);
        total_line_size--;
        total_star += 2;
    }
    return (total_star - 2);
}

void tree(int size)
{
    int line = 0;
    int full_star = 1;
    int k = 4;

    for (int i = 0; i != size; i++) {
        k += 2;
        line += k;
    }
    for (int i = 0; i < size; i++)
        full_star = make_branch(i, (line / 2) - (size * 2), full_star);
    make_trunk(size, line, k);
}
