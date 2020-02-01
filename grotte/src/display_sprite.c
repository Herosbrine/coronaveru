/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void display_sprite(data_t *data)
{
    disp_map(data);
    sfRenderWindow_drawSprite(data->window, CHF_SOURIS[0].sprite, 0);
}
