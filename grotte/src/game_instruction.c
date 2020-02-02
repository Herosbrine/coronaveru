/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "map_grotte.h"
#include "chauffe_souris.h"

void animation(data_t *data)
{
    animation_chauffe_souris(data);
}

void game_instruction(data_t *data)
{
    if (data->end_scene == 0) {
    map_grotte(data);
        animation(data);
        collision(data);
    } else {
        last_scene(data);
    }
}