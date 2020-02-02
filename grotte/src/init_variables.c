/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init var
*/

#include "structure.h"
#include "game.h"
#include "map_grotte.h"
#include "my.h"
#include "chauffe_souris.h"

void init_variables(d_t *d)
{
    d->window = create_window();
    sfRenderWindow_setMouseCursorVisible(d->window, sfFalse);
    d->stress_music.sbang = sfSoundBuffer_createFromFile("sound/stress_music.ogg");
    d->stress_music.bang = sfSound_create();
    sfSound_setBuffer(d->stress_music.bang, d->stress_music.sbang);
    d->nbr_chf_souris = 18;
    d->nbr_total_bat = d->nbr_chf_souris;
    d->active_click = 0;
    d->active_die = 0;
    d->active_dir = 0;
    d->mouse_move_x = 0;
    d->mouse_move_y = 0;
    d->last_bat_alive = 0;
    d->end_scene = 0;
    d->active_restart = 0;
    d->scene_faez = 0;
    d->button_clock = sfClock_create();
    init_grotte_layer(d);
    init_map_grotte_sprite_texture(d);
    init_chauffe_souris_sp_t(d);
    init_chauffe_souris_pos(d);
    init_bat_die(d);
    init_scope(d);
    init_last_scene(d);
    for (int i = 0; i < d->nbr_chf_souris; i++)
        d->chauffe_souris_tab[i].is_die = 0;
}
