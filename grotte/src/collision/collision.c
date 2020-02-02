/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"
#include "macro.h"

void collision(d_t *d)
{
    int count = 0;

    for (int i = 0; i < d->nbr_chf_souris; i++) {
        if (d->mouse_button_x >= CHF_SOURIS[i].pos.x && d->mouse_button_x <= CHF_SOURIS[i].pos.x + 110
        && d->mouse_button_y >= CHF_SOURIS[i].pos.y && d->mouse_button_y <= CHF_SOURIS[i].pos.y + 96) {
            d->active_die = 1;
            d->bat_die.pos.x = CHF_SOURIS[i].pos.x;
            d->bat_die.pos.y = CHF_SOURIS[i].pos.y;
            CHF_SOURIS[i].is_die = 1;
            break;
        } else {
            d->active_die = 0;
        }
    }
    for (int j = 0; j < d->nbr_chf_souris; j++) {
        if (CHF_SOURIS[j].is_die == 0)
            count++;
    }
    d->nbr_total_bat = count;
    if (d->nbr_total_bat <= 2)
        d->end_scene = 1;
}