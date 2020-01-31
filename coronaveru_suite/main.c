/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** main.c
*/

#include "game.h"
#include "my.h"

void display_game(data_t *data)
{
    sfRenderWindow_clear(data->window, sfBlack);
    sfRenderWindow_drawSprite(data->window, data->s_map, NULL);
    sfRenderWindow_display(data->window);
}

void events_handling(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)){
        if (data->event.type == sfEvtClosed)
            sfRenderWindow_close(data->window);
    }
}

void game_instruction(data_t *data)
{
    return;
}

void game_loop(data_t *data)
{
    while (sfRenderWindow_isOpen(data->window)){
        events_handling(data);
        game_instruction(data);
        display_game(data);
    }
}

int main(int ac, char **av)
{
    data_t data;

    initialize_data(&data);
    game_loop(&data);
    return (0);
}
