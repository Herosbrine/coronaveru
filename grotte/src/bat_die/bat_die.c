/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"
#include "macro.h"

void init_bat_die(d_t *d)
{
    d->texture.t_bat_die = sfTexture_createFromFile("image/blood.png", NULL);
    d->bat_die.sprite = sfSprite_create();
    sfSprite_setTexture(d->bat_die.sprite, d->texture.t_bat_die, 0);
    sfSprite_setTextureRect(d->bat_die.sprite, (sfIntRect){104, 0, 123, 141});
    d->bat_die.clock = sfClock_create();
}

void animation_die_1(d_t *d)
{
    if (GET_TIME(d->bat_die.clock) >= 0
    && GET_TIME(d->bat_die.clock) <= 300) {
        d->bat_die.rect.left = 0;
        d->bat_die.rect.width = 104;
        d->bat_die.rect.height = 141;
        sfSprite_setTextureRect(d->bat_die.sprite, d->bat_die.rect);
    }
}

void animation_die_2(d_t *d)
{
    if (GET_TIME(d->bat_die.clock) >= 300
    && GET_TIME(d->bat_die.clock) <= 600) {
        d->bat_die.rect.left = 104;
        d->bat_die.rect.width = 123;
        d->bat_die.rect.height = 141;
        sfSprite_setTextureRect(d->bat_die.sprite, d->bat_die.rect);
    }
}


void animation_die_3(d_t *d)
{
    if (GET_TIME(d->bat_die.clock) >= 600
    && GET_TIME(d->bat_die.clock) <= 1200) {
        d->bat_die.rect.left = 227;
        d->bat_die.rect.width = 139;
        d->bat_die.rect.height = 141;
        sfSprite_setTextureRect(d->bat_die.sprite, d->bat_die.rect);
    }
    if (GET_TIME(d->bat_die.clock) >= 1200)
        sfClock_restart(d->bat_die.clock);
}

void animation_die(d_t *d)
{
    animation_die_1(d);
    animation_die_2(d);
    animation_die_3(d);
}

void bat_die(d_t *d)
{
    if (d->active_die == 1) {
        sfSprite_setPosition(d->bat_die.sprite, d->bat_die.pos);
        //animation_die(d);
        sfRenderWindow_drawSprite(d->window, d->bat_die.sprite, 0);
    }
}