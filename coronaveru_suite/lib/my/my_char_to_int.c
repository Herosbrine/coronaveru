/*
** EPITECH PROJECT, 2019
** CHAR TO INT
** File description:
** my_char_to_int
*/

#include "my.h"

int my_char_to_int(char *str)
{
    int taille = my_strlen(str);
    int resultat = 0;
    int i = 0;
    int negatif = 1;
    int newsize = 0;

    if (str[0] == '-' && my_strlen(str) != 1){
        negatif *= -1;
        i++;
    }
    for (int i = 0; i < taille; i++){
        if (str[i] >= '0' && str[i] <= '9')
            newsize++;
    }
    for (; str[i] != '\0'; i++){
        if (str[i] >= '0' && str[i] <= '9')
            resultat += (str[i] - 48) * my_power(10, newsize - 1 - i);
    }
    return (resultat * negatif);
}
