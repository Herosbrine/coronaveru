/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "chauffe_souris.h"

void init_last_scene(d_t *d)
{
    d->last_bat_1.sprite = sfSprite_create();
    d->last_bat_2.sprite = sfSprite_create();
    d->last_bat_1.clock = sfClock_create();
    d->last_bat_2.clock = sfClock_create();
    sfSprite_setTexture(d->last_bat_1.sprite, d->texture.chauffe_souris_lft, 0);
    sfSprite_setTexture(d->last_bat_2.sprite, d->texture.chauffe_souris_rght, 0);
    sfSprite_setTextureRect(d->last_bat_1.sprite, (sfIntRect){256, 0, 105, 96});
    sfSprite_setTextureRect(d->last_bat_2.sprite, (sfIntRect){0, 0, 105, 96});
    d->last_bat_1.pos.x = (1920 / 2) - 100;
    d->last_bat_1.pos.y = 5;
    d->last_bat_2.pos.x = (1920 / 2) + 100;
    d->last_bat_2.pos.y = 5;
    sfSprite_setPosition(d->last_bat_1.sprite, d->last_bat_1.pos);
    sfSprite_setPosition(d->last_bat_2.sprite, d->last_bat_2.pos);
}

void move_bat_part_1(d_t *d)
{
    if (d->last_bat_1.pos.y < 400) {
        d->last_bat_1.pos.y += 5;
        d->last_bat_2.pos.y += 5;
        sfSprite_setPosition(d->last_bat_1.sprite, d->last_bat_1.pos);
        sfSprite_setPosition(d->last_bat_2.sprite, d->last_bat_2.pos);
    } else if (d->last_bat_1.pos.y >= 400) {
        if (d->last_bat_1.pos.x >= -150) {
            d->last_bat_1.pos.x -= 5;
        }
        if (d->last_bat_2.pos.x <= 1920) {
            d->last_bat_2.pos.x += 5;
        }
        if (d->last_bat_1.pos.x <= -150)
            d->scene_faez = 1;
        sfSprite_setPosition(d->last_bat_1.sprite, d->last_bat_1.pos);
        sfSprite_setPosition(d->last_bat_2.sprite, d->last_bat_2.pos);
    }
}

void last_scene(d_t *d)
{
    animation_left_dir(&d->last_bat_1);
    animation_right_dir(&d->last_bat_2);
    move_bat_part_1(d);
}