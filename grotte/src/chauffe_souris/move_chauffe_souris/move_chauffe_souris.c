/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void direction_chf_souris(data_t *data, int i)
{
    if (data->chauffe_souris_tab[i].pos.x > 1920 - 250)
        data->chauffe_souris_tab[i].dir_x *= -1;
    if (data->chauffe_souris_tab[i].pos.x <= 0)
        data->chauffe_souris_tab[i].dir_x *= -1;
    if (data->chauffe_souris_tab[i].pos.y > 1080 - 96)
        data->chauffe_souris_tab[i].dir_y *= -1;
    if (data->chauffe_souris_tab[i].pos.y <= 0)
        data->chauffe_souris_tab[i].dir_y *= -1;
}

void position_chf_souris(data_t *data, int i)
{
    data->chauffe_souris_tab[i].pos.x += data->chauffe_souris_tab[i].dir_x;
    data->chauffe_souris_tab[i].pos.y += data->chauffe_souris_tab[i].dir_y;
}

void move_chauffe_souris(data_t *data)
{
    for (int i = 0; i < data->nbr_chf_souris; i++) {
        direction_chf_souris(data, i);
        position_chf_souris(data, i);
    }
}