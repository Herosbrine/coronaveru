/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include <stdlib.h>
#include "structure.h"
#include "macro.h"

void init_chauffe_souris_sp_t(data_t *data)
{
    data->chauffe_souris_tab = malloc(sizeof(chauffe_souris_t) * 15);
    data->texture.chauffe_souris = sfTexture_createFromFile("image/bat.png", NULL);
    for (int i = 0; i < 15; i++) {
        CHF_SOURIS[i].sprite = sfSprite_create();
        CHF_SOURIS[i].clock = sfClock_create();
        sfSprite_setTexture(CHF_SOURIS[i].sprite, data->texture.chauffe_souris, 0);
        sfSprite_setTextureRect(CHF_SOURIS[i].sprite, (sfIntRect){256, 0, 105, 96});
    }
}