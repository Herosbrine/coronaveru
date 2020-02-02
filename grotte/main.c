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
    sfSound_play(data->stress_music.bang);
    while (sfRenderWindow_isOpen(data->window)){
        event_gestion(data);
        game_instruction(data);
        sfRenderWindow_clear(data->window, sfBlack);
        display_sprite(data);
        sfRenderWindow_display(data->window);
    }
    sfSound_destroy(data->stress_music.bang);
    sfSoundBuffer_destroy(data->stress_music.sbang);
}

int main(void)
{
    data_t data;

    game(&data);
    return (0);
}
