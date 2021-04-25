/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** char_tester.c
*/

#include "../../includes/starter_pack.h"

int is_char_nbr(char c)
{
    if (c < 48 || c > 57)
        return (0);
    return (1);
}

int is_char_cap(char c)
{
    if (c < 65 || c > 90)
        return (0);
    return (1);
}

int is_char_low(char c)
{
    if (c < 97 || c > 122)
        return (0);
    return (1);
}

int is_char_right(char c, char test)
{
    if (c != test)
        return (0);
    return (1);
}