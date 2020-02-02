/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "macro.h"

void    init_chauffe_souris_sp_t(d_t *d)
{
    d->chauffe_souris_tab = malloc(sizeof(chauffe_souris_t) * d->nbr_chf_souris);
    d->texture.chauffe_souris_lft = sfTexture_createFromFile("image/bat.png", NULL);
    d->texture.chauffe_souris_rght = sfTexture_createFromFile("image/bat_inverse.png", NULL);
    d->sprite_grotte.chf_souris_left = sfSprite_create();
    d->sprite_grotte.chf_souris_rght = sfSprite_create();
    sfSprite_setTexture(d->sprite_grotte.chf_souris_left, d->texture.chauffe_souris_lft, 0);
    sfSprite_setTextureRect(d->sprite_grotte.chf_souris_left, (sfIntRect){256, 0, 105, 96});
    sfSprite_setTexture(d->sprite_grotte.chf_souris_rght, d->texture.chauffe_souris_rght, 0);
    sfSprite_setTextureRect(d->sprite_grotte.chf_souris_rght, (sfIntRect){0, 0, 105, 96});

    for (int i = 0; i < d->nbr_chf_souris; i++) {
        CHF_SOURIS[i].sprite = sfSprite_create();
        sfSprite_setTexture(CHF_SOURIS[i].sprite, d->texture.chauffe_souris_lft, 0);
        sfSprite_setTextureRect(CHF_SOURIS[i].sprite, (sfIntRect){256, 0, 105, 96});
        CHF_SOURIS[i].clock = sfClock_create();
    }
}