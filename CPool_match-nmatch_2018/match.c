/*
** EPITECH PROJECT, 2018
** match.c
** File description:
** match.c
*/

int match(char const *s1, char const *s2)
{
    if (*s2 == '\0') {
        if (*s1 == '\0')
            return (1);
        return (0);
    }
    for (; (*s2 == '*') && (*(s2 + 1) == '*'); s2++);
    if (*s1 == *s2)
        return(match((s1 + 1), (s2 + 1)));
    if (*s1 != *s2) {
        if (*s2 == '*' && (match((s1 + 1), s2) == 1 || match(s1, (s2 + 1)) == 1))
            return (1);
        else
            return (0);
    }
    return (0);
}

int main(int ac, char **av)
{
    char const *s1 = av[1];
    char const *s2 = av[2];

    if (ac > 3)
        return (84);
    match(s1, s2);
    return (0);
}
