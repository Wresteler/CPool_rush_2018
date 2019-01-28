/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "tree.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else
        tree(my_getnbr(av[1]));
    return (0);
}
