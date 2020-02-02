/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void direction_chf_souris(d_t *d, int i)
{
    if (d->chauffe_souris_tab[i].pos.x > 1920 - 250)
        d->chauffe_souris_tab[i].dir_x *= -1;
    if (d->chauffe_souris_tab[i].pos.x <= 0)
        d->chauffe_souris_tab[i].dir_x *= -1;
    if (d->chauffe_souris_tab[i].pos.y > 1080 - 96)
        d->chauffe_souris_tab[i].dir_y *= -1;
    if (d->chauffe_souris_tab[i].pos.y <= 0)
        d->chauffe_souris_tab[i].dir_y *= -1;
}

void position_chf_souris(d_t *d, int i)
{
    d->chauffe_souris_tab[i].pos.x += d->chauffe_souris_tab[i].dir_x;
    d->chauffe_souris_tab[i].pos.y += d->chauffe_souris_tab[i].dir_y;
}

void move_chauffe_souris(d_t *d)
{
    for (int i = 0; i < d->nbr_chf_souris; i++) {
        direction_chf_souris(d, i);
        position_chf_souris(d, i);
    }
}