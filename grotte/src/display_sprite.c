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

void display_sprite(data_t *data)
{
    disp_map(data);
    if (data->end_scene == 0) {
        for (int i = 0; i < data->nbr_chf_souris; i++){
            if (data->chauffe_souris_tab[i].pos.x >= 1920 - 20) {
                data->chauffe_souris_tab[i].dir_x *= -1;
                //sfClock_restart(CHF_SOURIS[i].clock);
            }
            if (data->chauffe_souris_tab[i].pos.x <= 0) {
                data->chauffe_souris_tab[i].dir_x *= -1;
                //sfClock_restart(CHF_SOURIS[i].clock);
            }
            if (data->chauffe_souris_tab[i].pos.y >= 1080 - 96) {
                data->chauffe_souris_tab[i].dir_y *= -1;
            }
            if (data->chauffe_souris_tab[i].pos.y <= 0) {
                data->chauffe_souris_tab[i].dir_y *= -1;
            }
            data->chauffe_souris_tab[i].pos.x += data->chauffe_souris_tab[i].dir_x;
            data->chauffe_souris_tab[i].pos.y += data->chauffe_souris_tab[i].dir_y;
            sfSprite_setPosition(CHF_SOURIS[i].sprite, (sfVector2f){CHF_SOURIS[i].pos.x, CHF_SOURIS[i].pos.y});
            if (CHF_SOURIS[i].is_die == 0)
                sfRenderWindow_drawSprite(data->window, CHF_SOURIS[i].sprite, 0);
        }
        if (data->active_die == 1)
            bat_die(data);
        sfRenderWindow_drawSprite(data->window, data->sprite_grotte.scope, 0);
    } else {
        sfRenderWindow_drawSprite(data->window, data->last_bat_1.sprite, 0);
        sfRenderWindow_drawSprite(data->window, data->last_bat_2.sprite, 0);
    }
    
}
