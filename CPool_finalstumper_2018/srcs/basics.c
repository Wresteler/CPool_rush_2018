/*
** EPITECH PROJECT, 2018
** basics.c
** File description:
** basics.c
*/

#include "final_stumper.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
    return (0);
}

int check_limit(int nb)
{
    if (nb <= -2147483647 || nb > 2147483647)
        return (84);
    else if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    return (0);
}

int my_put_nbr(int nb)
{
    int tmp = 0;

    if (check_limit(nb) == 84)
        return (84);
    else if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    else if (nb > 9)
        my_put_nbr(nb / 10);
    tmp = nb % 10;
    my_putchar(tmp + 48);
    return (0);
}
