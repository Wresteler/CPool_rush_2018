/*
** EPITECH PROJECT, 2018
** final_stumper.h
** File description:
** final_stumper.h
*/

#ifndef FINAL_STUMPER_H_
#define FINAL_STUMPER_H_

#define BUFF_SIZE (4096)
#include <unistd.h>

void my_putchar(char);
int my_putstr(char const *);
int check_limits(int);
int my_put_nbr(int);
void check_o_star(char *, int);
void one_line_char(int);
void check_one_line(char *);
void check_nb_lines(char *, int);
int rush3(char *);
int recup_lines(char *);
void check_one_charac(char);
void check_two_charac(char *, int);
void two_by_two(char *, int, int);
void print_two_by_two(char *, int);
void one_column(char *, int, int);
void print_column(char *, int, int);

#endif
