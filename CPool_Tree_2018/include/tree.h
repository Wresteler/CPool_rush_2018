/*
** EPITECH PROJECT, 2019
** tree.h
** File description:
** tree.h
*/

#ifndef TREE_H_
#define TREE_H_

#include <unistd.h>

void my_putchar(char);
int my_getnbr(char *);

int place_trunk(int, int, int, int);
int make_trunk(int, int, int);
int make_branch(int, int, int);
int make_line_branch(int, int);
void tree(int);

#endif
