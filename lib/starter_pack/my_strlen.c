/*
** EPITECH PROJECT, 2020
** starter_pack
** File description:
** my_strlen.c
*/

#include "../../includes/starter_pack.h"

int my_strlen(char *str)
{
    int i = -1;

    if (str == NULL) return (0);
    while (str[i++] != '\0') ;
    return (i);
}