/*
** EPITECH PROJECT, 2019
** basics.c
** File description:
** basics.c
*/

#include "tree.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_getnbr(char *str)
{
    int val = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            val *= 10;
            val += *str - '0';
        }
        else
            return (val);
	str++;
    }
    return (val);
}
