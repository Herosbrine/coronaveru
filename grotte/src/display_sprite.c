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

void display_sprite(d_t *d)
{
    disp_map(d);
    if (d->end_scene == 0) {
        for (int i = 0; i < d->nbr_chf_souris; i++){
            if (d->chauffe_souris_tab[i].pos.x >= 1920 - 20) {
                d->chauffe_souris_tab[i].dir_x *= -1;
                //sfClock_restart(CHF_SOURIS[i].clock);
            }
            if (d->chauffe_souris_tab[i].pos.x <= 0) {
                d->chauffe_souris_tab[i].dir_x *= -1;
                //sfClock_restart(CHF_SOURIS[i].clock);
            }
            if (d->chauffe_souris_tab[i].pos.y >= 1080 - 96) {
                d->chauffe_souris_tab[i].dir_y *= -1;
            }
            if (d->chauffe_souris_tab[i].pos.y <= 0) {
                d->chauffe_souris_tab[i].dir_y *= -1;
            }
            d->chauffe_souris_tab[i].pos.x += d->chauffe_souris_tab[i].dir_x;
            d->chauffe_souris_tab[i].pos.y += d->chauffe_souris_tab[i].dir_y;
            sfSprite_setPosition(CHF_SOURIS[i].sprite, (sfVector2f){CHF_SOURIS[i].pos.x, CHF_SOURIS[i].pos.y});
            if (CHF_SOURIS[i].is_die == 0)
                sfRenderWindow_drawSprite(d->window, CHF_SOURIS[i].sprite, 0);
        }
        if (d->active_die == 1)
            bat_die(d);
        sfRenderWindow_drawSprite(d->window, d->sprite_grotte.scope, 0);
    } else {
        sfRenderWindow_drawSprite(d->window, d->last_bat_1.sprite, 0);
        sfRenderWindow_drawSprite(d->window, d->last_bat_2.sprite, 0);
    }
    
}
