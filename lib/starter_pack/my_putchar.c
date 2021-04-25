/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_putchar.c
*/

#include "../../includes/starter_pack.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}