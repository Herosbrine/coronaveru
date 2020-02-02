/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "chauffe_souris.h"

void init_last_scene(data_t *data)
{
    data->last_bat_1.sprite = sfSprite_create();
    data->last_bat_2.sprite = sfSprite_create();
    data->last_bat_1.clock = sfClock_create();
    data->last_bat_2.clock = sfClock_create();
    sfSprite_setTexture(data->last_bat_1.sprite, data->texture.chauffe_souris_lft, 0);
    sfSprite_setTexture(data->last_bat_2.sprite, data->texture.chauffe_souris_rght, 0);
    sfSprite_setTextureRect(data->last_bat_1.sprite, (sfIntRect){256, 0, 105, 96});
    sfSprite_setTextureRect(data->last_bat_2.sprite, (sfIntRect){0, 0, 105, 96});
    data->last_bat_1.pos.x = (1920 / 2) - 100;
    data->last_bat_1.pos.y = 5;
    data->last_bat_2.pos.x = (1920 / 2) + 100;
    data->last_bat_2.pos.y = 5;
    sfSprite_setPosition(data->last_bat_1.sprite, data->last_bat_1.pos);
    sfSprite_setPosition(data->last_bat_2.sprite, data->last_bat_2.pos);
}

void move_bat_part_1(data_t *data)
{
    if (data->last_bat_1.pos.y < 400) {
        data->last_bat_1.pos.y += 5;
        data->last_bat_2.pos.y += 5;
        sfSprite_setPosition(data->last_bat_1.sprite, data->last_bat_1.pos);
        sfSprite_setPosition(data->last_bat_2.sprite, data->last_bat_2.pos);
    } else if (data->last_bat_1.pos.y >= 400) {
        if (data->last_bat_1.pos.x >= -150) {
            data->last_bat_1.pos.x -= 5;
        }
        if (data->last_bat_2.pos.x <= 1920) {
            data->last_bat_2.pos.x += 5;
        }
        sfSprite_setPosition(data->last_bat_1.sprite, data->last_bat_1.pos);
        sfSprite_setPosition(data->last_bat_2.sprite, data->last_bat_2.pos);
    }
}

void last_scene(data_t *data)
{
    animation_left_dir(&data->last_bat_1);
    animation_right_dir(&data->last_bat_2);
    move_bat_part_1(data);
}