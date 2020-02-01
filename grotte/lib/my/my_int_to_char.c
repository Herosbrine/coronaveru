/*
** EPITECH PROJECT, 2019
** INT TO CHAR
** File description:
** my_int_to_char
*/

#include "my.h"
#include <stdlib.h>

char *my_int_to_char(int nb)
{
    char *tab;
    int taille = my_number_len(nb);

    if (nb == 0){
        tab = malloc(sizeof(char) * 1 + 1);
        tab[0] = '0';
        tab[1] = '\0';
        return (tab);
    }
    tab = malloc(sizeof(char) * taille + 1);
    tab[taille] = '\0';
    for (int i = 0; i < taille; i++)
        tab[i] = nb / my_power(10, taille - i - 1) % 10 + 48;
    return (tab);
}
