#include "structure.h"
#include "game.h"

void game(data_t *data)
{
    init_variables(data);
    while (sfRenderWindow_isOpen(data->window)){
        event_gestion(data);
        //game_instruction(data);
        sfRenderWindow_clear(data->window, sfBlack);
        display_sprite(data);
        sfRenderWindow_display(data->window);
    }
}

int main(void)
{
    data_t data;

    game(&data);
    return (0);
}
