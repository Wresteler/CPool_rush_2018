/*
** EPITECH PROJECT, 2018
** rush2
** File description:
** rush2
*/

#include "../../include/my.h"

int occurences(char c, char *str)
{
    int n = 0;
    int len = my_strlen(str);
    int i = 0;

    if (c < 91)
        c = c + 32;
    while (i <= len - 1) {
        if (str[i] < 91 && str[i] > 64)
            str[i] = str[i] + 32;
        if (c == str[i])
            n++;
        i++;
    }
    return (n);
}

int frequencies(int c, int occ, char *str)
{
    int freq = 0;
    int nb = 0;
    int i = 0;
    int len = my_strlen(str);

    if (c < 91)
        c = c + 32;
    while (i <= len - 1) {
        if (str[i] < 91 && str[i] > 64)
            str[i] = str[i] + 32;
        if (str[i] >= 97 && str[i] <= 122)
            nb++;
        i++;
    }
    freq = (occ * 10000) / nb;
    return (freq);
}

int closer(int freq, int en, int fr, int ge, int sp)
{
    int n = 1;
    int lg = en - freq;

    if (fr - freq < lg) {
        lg = fr;
        n = 2;
    }
    if (ge - freq < lg) {
        lg = ge;
        n = 3;
    }
    if (sp - freq < lg)
        n = 4;
    return (n);
}

void rush2(int ac, char **av)
{
    int arr[ac - 2][3];

    for (int i = 0; i <= ac - 3; i++) {
        arr[i][0] = av[i + 2][0];
        arr[i][1] = occurences(av[i + 2][0], av[1]);
        arr[i][2] = frequencies(av[i + 2][0], arr[i][1], av[1]);
        my_putchar(arr[i][0]);
        my_putchar(':');
        my_put_nbr(arr[i][1]);
        my_putstr(" (");
        my_put_nbr(arr[i][2] / 100);
        my_putchar('.');
        my_put_nbr(arr[i][2] - (arr[i][2] / 100) * 100);
        my_putstr("%)\n");
    }
    language(ac - 2, av[1]);
}
