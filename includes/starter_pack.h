/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** starter_pack.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_char_nbr(char c);
int is_char_cap(char c);
int is_char_low(char c);
void my_putchar(char c);
int my_strlen(char *str);
int my_getnbr(char *nbr);
void my_putstr(char *str);
char *anti_four_four(void);
char *get_next_line(int fd);
void my_put_nbr(int nbr_base);
void my_putstr_array(char **array);
int is_char_right(char c, char test);
char *my_strncpy(char *src, int start);
char *my_strcat(char *str1, char *str2);
int my_strncomp(char *str1, char *str2, int stop);
char **strn_to_word_array(char *str, char limiter);