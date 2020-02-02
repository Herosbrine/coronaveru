/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "map_grotte.h"
#include "chauffe_souris.h"

void animation(d_t *d)
{
    animation_chauffe_souris(d);
}

void game_instruction(d_t *d)
{
    if (d->end_scene == 0) {
    map_grotte(d);
        animation(d);
        collision(d);
    } else {
        last_scene(d);
    }
}