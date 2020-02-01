/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"

void mv_layer_a(data_t *data)
{
    if (data->map_grotte_pos.layer_a.x > -1920) {
        data->map_grotte_pos.layer_a.x -= 0.4;
        data->map_grotte_pos.layer_a_next.x = data->map_grotte_pos.layer_a.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_a, data->map_grotte_pos.layer_a);
        sfSprite_setPosition(data->sprite_grotte.layer_a_next, data->map_grotte_pos.layer_a_next);
    } else {
        data->map_grotte_pos.layer_a.x = 0;
        data->map_grotte_pos.layer_a_next.x = data->map_grotte_pos.layer_a.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_a, data->map_grotte_pos.layer_a);
        sfSprite_setPosition(data->sprite_grotte.layer_a_next, data->map_grotte_pos.layer_a_next);
    }
}

void mv_layer_b(data_t *data)
{
    if (data->map_grotte_pos.layer_b.x > -1920) {
        data->map_grotte_pos.layer_b.x -= 0.6;
        data->map_grotte_pos.layer_b_next.x = data->map_grotte_pos.layer_b.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_b, data->map_grotte_pos.layer_b);
        sfSprite_setPosition(data->sprite_grotte.layer_b_next, data->map_grotte_pos.layer_b_next);
    } else {
        data->map_grotte_pos.layer_b.x = 0;
        data->map_grotte_pos.layer_b_next.x = data->map_grotte_pos.layer_b.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_b, data->map_grotte_pos.layer_b);
        sfSprite_setPosition(data->sprite_grotte.layer_b_next, data->map_grotte_pos.layer_b_next);
    }
}

void mv_layer_c(data_t *data)
{
    if (data->map_grotte_pos.layer_c.x > -1920) {
        data->map_grotte_pos.layer_c.x -= 0.8;
        data->map_grotte_pos.layer_c_next.x = data->map_grotte_pos.layer_c.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_c, data->map_grotte_pos.layer_c);
        sfSprite_setPosition(data->sprite_grotte.layer_c_next, data->map_grotte_pos.layer_c_next);
    } else {
        data->map_grotte_pos.layer_c.x = 0;
        data->map_grotte_pos.layer_c_next.x = data->map_grotte_pos.layer_c.x + 1920;
        sfSprite_setPosition(data->sprite_grotte.layer_c, data->map_grotte_pos.layer_c);
        sfSprite_setPosition(data->sprite_grotte.layer_c_next, data->map_grotte_pos.layer_c_next);
    }
}

void move_map_grotte(data_t *data)
{
    mv_layer_a(data);
    mv_layer_b(data);
    mv_layer_c(data);
}