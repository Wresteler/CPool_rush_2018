/*
** EPITECH PROJECT, 2018
** rush.c
** File description:
** rush.c
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (; *str; str++)
        my_putchar(*str);
}

int high(int x, int y)
{
    if (x == 1 && y > 1) {
        my_putchar('*');
        my_putchar('\n');
        return (0);
    } else if (x == 1 && y == 1) {
        my_putchar('*');
        my_putchar('\n');
        return (0);
    }
    my_putchar('/');
    for (int q = 1; q < x - 1; q++)
        my_putchar('*');
    my_putchar(92);
    my_putchar('\n');
}

int middle(int x, int y)
{
    int q = 1;
    int qy = 1;

    if (x == 1 && y > 1) {
        for (; qy < y - 1; qy++){
            my_putchar('*');
            my_putchar('\n');
        }
        return (0);
    }
    for (; qy < y - 1; qy++) {
        my_putchar('*');
        for (; q < x- 1; q++)
            my_putchar(' ');
        my_putchar('*');
        q = 1;
        my_putchar('\n');
    }
    return (0);
}

int bot(int x, int y)
{
    if (y == 1)
        return (0);
    if (x == 1 && y > 1) {
        my_putchar('*');
        my_putchar('\n');
        return (0);
    }
    my_putchar(92);
    for (int q = 1; q < x - 1; q++)
        my_putchar('*');
    my_putchar('/');
    my_putchar('\n');
    return (0);
}

int rush(int x, int y)
{
    int q = 0;

    if (x <= 0 || y <= 0)
        return (my_putstr("Invalid size\n"));
    if (y == 1 && x > 1) {
        for (int q = 0; q != x; q++)
            my_putchar('*');
        my_putchar('\n');
        return (0);
    }
    high(x, y);
    middle(x, y);
    bot(x, y);
    return (0);
}
