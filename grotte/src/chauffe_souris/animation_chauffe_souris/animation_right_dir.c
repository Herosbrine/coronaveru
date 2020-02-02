/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void animation_right_1(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) >= 0
    && GET_TIME(chauffe_souris->clock) <= 100) {
        chauffe_souris->rect.left = 0;
        chauffe_souris->rect.top = 0;
        chauffe_souris->rect.width = 105;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
    }
}

void animation_right_2(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) >= 100
    && GET_TIME(chauffe_souris->clock) <= 200) {
        chauffe_souris->rect.left = 105;
        chauffe_souris->rect.top = 0;
        chauffe_souris->rect.width = 149;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
    }
}

void animation_right_3(chauffe_souris_t *chauffe_souris)
{
    if (GET_TIME(chauffe_souris->clock) >= 200
    && GET_TIME(chauffe_souris->clock) <= 300) {
        chauffe_souris->rect.left = 254;
        chauffe_souris->rect.top = 0;
        chauffe_souris->rect.width = 107;
        chauffe_souris->rect.height = 96;
        sfSprite_setTextureRect(chauffe_souris->sprite, chauffe_souris->rect);
    }
    if (GET_TIME(chauffe_souris->clock) >= 300)
        sfClock_restart(chauffe_souris->clock);
}

void animation_right_dir(chauffe_souris_t *chauffe_souris)
{
    animation_right_1(chauffe_souris);
    animation_right_2(chauffe_souris);
    animation_right_3(chauffe_souris);
}