/*
** EPITECH PROJECT, 2018
** rush3.c
** File description:
** rush3.c
*/

#include "final_stumper.h"

int rush3(char *str)
{
    int lines = recup_lines(str);

    if (str[0] == '\0') {
        write(2, "Error: empty buffer\n", 20);
        return (84);
    }
    else if (str[2] == '\0')
        check_one_charac(str[0]);
    else
        check_nb_lines(str, lines);
    return (0);
}

void check_nb_lines(char *str, int lines)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        i++;
        if (str[i] == '\n')
            n++;
    }
    if (lines == 1)
        check_one_line(str);
    else if (lines == i / 2)
        one_column(str, i, lines);
    else
        two_by_two(str, i, lines);
}

int recup_lines(char *str)
{
    int i = 0;
    int lines = 0;

    while (str[i]) {
        if (str[i] == '\n')
            lines++;
        i++;
    }
    return (lines);
}
