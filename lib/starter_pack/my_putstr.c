/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_putstr.c
*/

#include "../../includes/starter_pack.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) my_putchar(str[i]);
}