/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"
#include "macro.h"

void collision(data_t *data)
{
    int count = 0;

    for (int i = 0; i < data->nbr_chf_souris; i++) {
        if (data->mouse_button_x >= CHF_SOURIS[i].pos.x && data->mouse_button_x <= CHF_SOURIS[i].pos.x + 110
        && data->mouse_button_y >= CHF_SOURIS[i].pos.y && data->mouse_button_y <= CHF_SOURIS[i].pos.y + 96) {
            data->active_die = 1;
            data->bat_die.pos.x = CHF_SOURIS[i].pos.x;
            data->bat_die.pos.y = CHF_SOURIS[i].pos.y;
            CHF_SOURIS[i].is_die = 1;
            break;
        } else {
            data->active_die = 0;
        }
    }
    for (int j = 0; j < data->nbr_chf_souris; j++) {
        if (CHF_SOURIS[j].is_die == 0)
            count++;
    }
    data->nbr_total_bat = count;
    if (data->nbr_total_bat <= 2)
        data->end_scene = 1;
}