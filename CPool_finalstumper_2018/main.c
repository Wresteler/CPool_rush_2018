/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "final_stumper.h"

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = 0;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    if (rush3(buff) == 84)
        return (84);
    return (0);
}
