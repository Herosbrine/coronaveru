/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init sprite texture
*/

#include "structure.h"

void init_pos_layer_a(d_t *d)
{
    d->map_grotte_pos.layer_a.x = 0;
    d->map_grotte_pos.layer_a.y = 0;
    d->map_grotte_pos.layer_a_next.x = 1920;
    d->map_grotte_pos.layer_a_next.y = 0;
}

void init_pos_layer_b(d_t *d)
{
    d->map_grotte_pos.layer_b.x = 0;
    d->map_grotte_pos.layer_b.y = 0;
    d->map_grotte_pos.layer_b_next.x = 1920;
    d->map_grotte_pos.layer_b_next.y = 0;
}

void init_pos_layer_c(d_t *d)
{
    d->map_grotte_pos.layer_c.x = 0;
    d->map_grotte_pos.layer_c.y = 0;
    d->map_grotte_pos.layer_c_next.x = 1920;
    d->map_grotte_pos.layer_c_next.y = 0;
}

void init_grotte_layer(d_t *d)
{
    init_pos_layer_a(d);
    init_pos_layer_b(d);
    init_pos_layer_c(d);
}