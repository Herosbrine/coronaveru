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
    for (int i = 0; i < data->nbr_chf_souris; i++) {
        if (data->mouse_button_x >= CHF_SOURIS[i].pos.x && data->mouse_button_x <= CHF_SOURIS[i].pos.x + 148
        && data->mouse_button_y >= CHF_SOURIS[i].pos.y && data->mouse_button_y <= CHF_SOURIS[i].pos.y + 120) {
            data->active_die = 1;
            data->bat_die.pos.x = CHF_SOURIS[i].pos.x;
            data->bat_die.pos.y = CHF_SOURIS[i].pos.y;
            CHF_SOURIS[i].is_die = 1;
            break;
        } else {
            data->active_die = 0;
        }
    }
}