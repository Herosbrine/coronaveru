/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void animation_left_1(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) > 0
    && GET_TIME(chauffe_souris->clock) < 400) {
        chauffe_souris->rect.left = 256;
        chauffe_souris->rect.width = 105;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
    }
}

void animation_left_2(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) > 400
    && GET_TIME(chauffe_souris->clock) < 800) {
        chauffe_souris->rect.left = 108;
        chauffe_souris->rect.width = 148;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
    }
}

void animation_left_3(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) > 800
    && GET_TIME(chauffe_souris->clock) < 1200) {
        chauffe_souris->rect.left = 0;
        chauffe_souris->rect.width = 108;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
        sfClock_restart(chauffe_souris->clock);
    }
}

void animation_left_step(chauffe_souris_t *chauffe_souris)
{
    animation_left_1(chauffe_souris);
    animation_left_2(chauffe_souris);
    animation_left_3(chauffe_souris);
}

void animation_left(data_t *data)
{
    animation_left_step(&CHF_SOURIS[0]);
}