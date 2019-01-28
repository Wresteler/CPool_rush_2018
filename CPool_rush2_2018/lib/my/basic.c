/*
** EPITECH PROJECT, 2018
** basic.c
** File description:
** basic.c
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (i);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
    }
    else {
        if (nb < 0) {
            my_putchar('-');
            nb = nb * (-1);
        }
        if (nb >= 10) {
            my_put_nbr(nb / 10);
            my_putchar(nb % 10 +48);
        }
        else
            my_putchar(nb + 48);
    }
    return (0);
}
