/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"
#include "macro.h"

void init_bat_die(data_t *data)
{
    data->texture.t_bat_die = sfTexture_createFromFile("image/blood.png", NULL);
    data->bat_die.sprite = sfSprite_create();
    sfSprite_setTexture(data->bat_die.sprite, data->texture.t_bat_die, 0);
    data->bat_die.clock = sfClock_create();
}

void animation_die_1(data_t *data)
{
    if (GET_TIME(data->bat_die.clock) >= 0
    && GET_TIME(data->bat_die.clock) <= 300) {
        data->bat_die.rect.left = 0;
        data->bat_die.rect.width = 104;
        data->bat_die.rect.height = 141;
        sfSprite_setTextureRect(data->bat_die.sprite, data->bat_die.rect);
    }
}

void animation_die_2(data_t *data)
{
    if (GET_TIME(data->bat_die.clock) >= 300
    && GET_TIME(data->bat_die.clock) <= 600) {
        data->bat_die.rect.left = 104;
        data->bat_die.rect.width = 123;
        data->bat_die.rect.height = 141;
        sfSprite_setTextureRect(data->bat_die.sprite, data->bat_die.rect);
    }
}


void animation_die_3(data_t *data)
{
    if (GET_TIME(data->bat_die.clock) >= 600
    && GET_TIME(data->bat_die.clock) <= 1200) {
        data->bat_die.rect.left = 227;
        data->bat_die.rect.width = 139;
        data->bat_die.rect.height = 141;
        sfSprite_setTextureRect(data->bat_die.sprite, data->bat_die.rect);
    }
    if (GET_TIME(data->bat_die.clock) >= 1200)
        sfClock_restart(data->bat_die.clock);
}

void animation_die(data_t *data)
{
    animation_die_1(data);
    animation_die_2(data);
    animation_die_3(data);
}

void bat_die(data_t *data)
{
    if (data->active_die == 1) {
        sfSprite_setPosition(data->bat_die.sprite, data->bat_die.pos);
        animation_die(data);
        sfRenderWindow_drawSprite(data->window, data->bat_die.sprite, 0);
    }
}