/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "game.h"

void game(data_t *data)
{
    init_variables(data);
    intro(data);
    srand(time(NULL));
    while (sfRenderWindow_isOpen(data->window)){
        event_gestion(data);
        game_instruction(data);
        sfRenderWindow_clear(data->window, sfBlack);
        display_sprite(data);
        sfRenderWindow_display(data->window);
    }
    for (int i = 0; i < data->nbr_chf_souris; i++) {
        if (data->chauffe_souris_tab[i].is_die == 0)
            data->last_bat_alive += 1;
    }
    printf("total : %d\n", data->last_bat_alive);
}

int main(void)
{
    data_t data;

    game(&data);
    return (0);
}
