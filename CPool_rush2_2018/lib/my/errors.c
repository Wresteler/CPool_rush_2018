/*
** EPITECH PROJECT, 2018
** errors.c
** File description:
** errors.c
*/

#include "../../include/my.h"

int error_letter(char **av)
{
    for (int i = 0; av[i]; i++) {
        if ((av[i][0] >= 'a' && av[i][1] <= 'z')
        || (av[i][0] >= 'A' && av[i][0] <= 'Z')) {
            return (0);
        } else {
            my_putstr("Error: Wrong argument !");
            return (84);
        }
    }
    return (0);
}

int error_arg(int ac, char **av)
{
    for (int i = 0; av[i]; i++) {
        if (ac < 3) {
            my_putstr("Error: Not enough arguments");
            return (84);
        }
        if (av[i][0] == error_letter(av))
            return (84);
        if (av[i][0] != error_letter(av))
            return (0);
        if (av[i][1]) {
            my_putstr("Error: Wrong argument !");
            return (84);
        }
    }
    return (0);
}
