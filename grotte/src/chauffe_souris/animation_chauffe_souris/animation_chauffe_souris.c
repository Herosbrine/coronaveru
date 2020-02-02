/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"
#include "chauffe_souris.h"

int which_dir(chauffe_souris_t *chauffe_souris)
{
    if (chauffe_souris->dir_x < 0)
        return (1);
    if (chauffe_souris->dir_x > 0)
        return (0);
}

void animation_chauffe_souris(d_t *d)
{
    for (int i = 0; i < d->nbr_chf_souris; i++) {
        if(which_dir(&CHF_SOURIS[i]) == 1) {
            CHF_SOURIS[i].sprite = d->sprite_grotte.chf_souris_left;
            animation_left_dir(&CHF_SOURIS[i]);
            d->active_dir = 0;
        } else {
            CHF_SOURIS[i].sprite = d->sprite_grotte.chf_souris_rght;
            animation_right_dir(&CHF_SOURIS[i]);
            d->active_dir = 1;
        }
    }
}