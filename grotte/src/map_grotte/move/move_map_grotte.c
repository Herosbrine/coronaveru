/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"

void mv_layer_a(d_t *d)
{
    if (d->map_grotte_pos.layer_a.x > -1920) {
        d->map_grotte_pos.layer_a.x -= 0.4;
        d->map_grotte_pos.layer_a_next.x = d->map_grotte_pos.layer_a.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_a, d->map_grotte_pos.layer_a);
        sfSprite_setPosition(d->sprite_grotte.layer_a_next, d->map_grotte_pos.layer_a_next);
    } else {
        d->map_grotte_pos.layer_a.x = 0;
        d->map_grotte_pos.layer_a_next.x = d->map_grotte_pos.layer_a.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_a, d->map_grotte_pos.layer_a);
        sfSprite_setPosition(d->sprite_grotte.layer_a_next, d->map_grotte_pos.layer_a_next);
    }
}

void mv_layer_b(d_t *d)
{
    if (d->map_grotte_pos.layer_b.x > -1920) {
        d->map_grotte_pos.layer_b.x -= 0.6;
        d->map_grotte_pos.layer_b_next.x = d->map_grotte_pos.layer_b.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_b, d->map_grotte_pos.layer_b);
        sfSprite_setPosition(d->sprite_grotte.layer_b_next, d->map_grotte_pos.layer_b_next);
    } else {
        d->map_grotte_pos.layer_b.x = 0;
        d->map_grotte_pos.layer_b_next.x = d->map_grotte_pos.layer_b.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_b, d->map_grotte_pos.layer_b);
        sfSprite_setPosition(d->sprite_grotte.layer_b_next, d->map_grotte_pos.layer_b_next);
    }
}

void mv_layer_c(d_t *d)
{
    if (d->map_grotte_pos.layer_c.x > -1920) {
        d->map_grotte_pos.layer_c.x -= 0.8;
        d->map_grotte_pos.layer_c_next.x = d->map_grotte_pos.layer_c.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_c, d->map_grotte_pos.layer_c);
        sfSprite_setPosition(d->sprite_grotte.layer_c_next, d->map_grotte_pos.layer_c_next);
    } else {
        d->map_grotte_pos.layer_c.x = 0;
        d->map_grotte_pos.layer_c_next.x = d->map_grotte_pos.layer_c.x + 1920;
        sfSprite_setPosition(d->sprite_grotte.layer_c, d->map_grotte_pos.layer_c);
        sfSprite_setPosition(d->sprite_grotte.layer_c_next, d->map_grotte_pos.layer_c_next);
    }
}

void move_map_grotte(d_t *d)
{
    mv_layer_a(d);
    mv_layer_b(d);
    mv_layer_c(d);
}