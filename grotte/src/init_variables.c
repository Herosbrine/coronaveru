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

void init_variables(data_t *data)
{
    data->window = create_window();
    sfRenderWindow_setMouseCursorVisible(data->window, sfTrue);
    data->nbr_chf_souris = 18;
    data->nbr_total_bat = data->nbr_chf_souris;
    data->active_click = 0;
    data->active_die = 0;
    data->active_dir = 0;
    data->mouse_move_x = 0;
    data->mouse_move_y = 0;
    data->last_bat_alive = 0;
    init_grotte_layer(data);
    init_map_grotte_sprite_texture(data);
    init_chauffe_souris_sp_t(data);
    init_chauffe_souris_pos(data);
    init_bat_die(data);
    init_scope(data);
    for (int i = 0; i < data->nbr_chf_souris; i++)
        data->chauffe_souris_tab[i].is_die = 0;
}
