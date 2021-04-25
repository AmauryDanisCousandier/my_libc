/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_get_next_line.c
*/

#include "../../includes/starter_pack.h"

char *add_end_char(char *str, char c)
{
    int len;
    char *new;
    int i;

    len = my_strlen(str);
    new = malloc(sizeof(char) * (len + 2));
    for (i = 0; i < len; i++) new[i] = str[i];
    new[i] = c;
    new[i + 1] = '\0';
    return (new);
}

char *get_next_line(int fd)
{
    int rd;
    int bk = 0;
    char *new = NULL;
    char buffer[1];

    while (1) {
        rd = read(fd, buffer, 1);
        buffer[rd] = '\0';
        if (rd <= 0) break;
        new = add_end_char(new, buffer[0]);
    }
    return (new);
}