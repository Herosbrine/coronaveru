#include "game.h"
#include "my.h"

void display_text1(data_t *data)
{
    if (sfTime_asSeconds(data->timer.time) < 3)
        sfRenderWindow_drawSprite(data->window, data->intro.sintro1, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 7)
        sfRenderWindow_drawSprite(data->window, data->intro.sintro2, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 10)
        sfRenderWindow_drawSprite(data->window, data->intro.sintro3, NULL);

    sfRenderWindow_display(data->window);
}

void my_destroy(data_t *data)
{
    sfTexture_destroy(data->textures.tinto1);
    sfTexture_destroy(data->textures.tinto2);
    sfTexture_destroy(data->textures.tinto3);
    sfSprite_destroy(data->intro.sintro1);
    sfSprite_destroy(data->intro.sintro2);
    sfSprite_destroy(data->intro.sintro3);
    sfRenderWindow_destroy(data->window);
}

void game_loop(data_t *data)
{
    data->timer.clock = sfClock_create();
    while (sfRenderWindow_isOpen(data->window)){
        sfEvent event;
        while (sfRenderWindow_pollEvent(data->window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(data->window);
        }
        data->timer.time = sfClock_getElapsedTime(data->timer.clock);
        display_text1(data);
    }
    my_destroy(data);
}

int main(int ac, char **av)
{
    data_t data;

    srand(time(NULL));
    initialize_data(&data);
    game_loop(&data);
    return (0);
}