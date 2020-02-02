/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** main
*/

#include "structure.h"
#include "game.h"

void game(d_t *d)
{
    init_variables(d);
    //intro(d);
    srand(time(NULL));
    sfSound_play(d->stress_music.bang);
    while (sfRenderWindow_isOpen(d->window)){
        event_gestion(d);
        game_instruction(d);
        sfRenderWindow_clear(d->window, sfBlack);
        display_sprite(d);
        sfRenderWindow_display(d->window);
        if (d->scene_faez == 1)
            break;
    }
    sfSound_destroy(d->stress_music.bang);
    sfSoundBuffer_destroy(d->stress_music.sbang);
    sfRenderWindow_close(d->window);
}

int main(void)
{
    d_t d;
    data_t data;

    game(&d);
    video(&data);
    return (0);
}
