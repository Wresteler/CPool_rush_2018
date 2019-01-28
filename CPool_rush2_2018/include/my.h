/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int occurences(char c, char *str);
int frequencies(int c, int occ, char *str);
int closer(int freq, int en, int fr, int ge, int sp);
void language(int len, char *str);
void rush2(int ac, char **av);
void display_language(int *tab);
int error_letter(char **av);
int error_arg(int ac, char **av);

#endif
