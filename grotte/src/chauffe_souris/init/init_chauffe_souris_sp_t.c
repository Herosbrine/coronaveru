/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "macro.h"

void init_chauffe_souris_sp_t(data_t *data)
{
    data->chauffe_souris_tab = malloc(sizeof(chauffe_souris_t) * data->nbr_chf_souris);
    data->texture.chauffe_souris_lft = sfTexture_createFromFile("image/bat.png", NULL);
    data->texture.chauffe_souris_rght = sfTexture_createFromFile("image/bat_inverse.png", NULL);
    data->sprite_grotte.chf_souris_left = sfSprite_create();
    data->sprite_grotte.chf_souris_rght = sfSprite_create();
    sfSprite_setTexture(data->sprite_grotte.chf_souris_left, data->texture.chauffe_souris_lft, 0);
    sfSprite_setTextureRect(data->sprite_grotte.chf_souris_left, (sfIntRect){256, 0, 105, 96});
    sfSprite_setTexture(data->sprite_grotte.chf_souris_rght, data->texture.chauffe_souris_rght, 0);
    sfSprite_setTextureRect(data->sprite_grotte.chf_souris_rght, (sfIntRect){0, 0, 105, 96});

    for (int i = 0; i < data->nbr_chf_souris; i++) {
        CHF_SOURIS[i].sprite = sfSprite_create();
        sfSprite_setTexture(CHF_SOURIS[i].sprite, data->texture.chauffe_souris_lft, 0);
        sfSprite_setTextureRect(CHF_SOURIS[i].sprite, (sfIntRect){256, 0, 105, 96});
        CHF_SOURIS[i].clock = sfClock_create();
    }
}