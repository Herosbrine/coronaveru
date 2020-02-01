/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init sprite texture
*/

#include "structure.h"

void init_pos_layer_a(data_t *data)
{
    data->map_grotte_pos.layer_a.x = 0;
    data->map_grotte_pos.layer_a.y = 0;
    data->map_grotte_pos.layer_a_next.x = 1920;
    data->map_grotte_pos.layer_a_next.y = 0;
}

void init_pos_layer_b(data_t *data)
{
    data->map_grotte_pos.layer_b.x = 0;
    data->map_grotte_pos.layer_b.y = 0;
    data->map_grotte_pos.layer_b_next.x = 1920;
    data->map_grotte_pos.layer_b_next.y = 0;
}

void init_pos_layer_c(data_t *data)
{
    data->map_grotte_pos.layer_c.x = 0;
    data->map_grotte_pos.layer_c.y = 0;
    data->map_grotte_pos.layer_c_next.x = 1920;
    data->map_grotte_pos.layer_c_next.y = 0;
}

void init_grotte_layer(data_t *data)
{
    init_pos_layer_a(data);
    init_pos_layer_b(data);
    init_pos_layer_c(data);
}