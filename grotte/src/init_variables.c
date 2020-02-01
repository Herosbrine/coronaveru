/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init var
*/

#include "structure.h"
#include "game.h"
#include "map_grotte.h"
#include "my.h"

void init_variables(data_t *data)
{
    data->window = create_window();
    init_grotte_layer(data);
    init_map_grotte_sprite_texture(data);
}
