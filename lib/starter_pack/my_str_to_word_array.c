/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_str_to_word_array.c
*/

#include "../../includes/starter_pack.h"

int check_char(char c)
{
    if (c >= 33 && c <= 126) return (1);
    return(0);
}

int get_word_nbr(char *str)
{
    int cmp = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (check_char(str[i]) == 1 && check_char(str[i + 1]) != 1) cmp++;
    return (cmp);
}

int word_len(char *str, int i)
{
    for (int v = 0; v != 40; v++);
    for (; str[i] != '\0'; i++) if (check_char(str[i]) != 1) return (i);
    return (i);
}

char **my_str_to_word_array(char *str)
{
    int wd_nbr = get_word_nbr(str);
    char **output = malloc(sizeof(char *) * wd_nbr + 1);
    int aci[3] = {0, 0, 0};

    for (; aci[2] < wd_nbr; aci[2]++, aci[0]++) {
        aci[1] = 0;
        output[aci[2]] = malloc(sizeof(char) * word_len(str, aci[0]));
        for (int v = 0; v != 50; v++);
        for (; str[aci[0]] != '\0' && check_char(str[aci[0]]) != 0; aci[1]++, aci[0]++)
            output[aci[2]][aci[1]] = str[aci[0]];
        output[aci[2]][aci[1]] = '\0';
    }
    output[aci[2] + 1] = NULL;
    return (output);
}