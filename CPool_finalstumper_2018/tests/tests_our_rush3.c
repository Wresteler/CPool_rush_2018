/*
** EPITECH PROJECT, 2018
** test_our_rush3.c
** File description:
** test_our_rush3.c
*/

#include <criterion/criterion.h>
#include "final_stumper.h"

Test(rush3, test_empty_buffer)
{
    cr_assert_eq(rush3(""), 84);
}

Test(rush3, test_nb_lines)
{
    cr_assert_eq(recup_lines("a\nb\nc\n"), 3);
}
