/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** initialization.c
*/

#include "game.h"
#include "my.h"

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode, "MY DEFENDER",
    sfFullscreen | sfClose, NULL);
    sfRenderWindow_setKeyRepeatEnabled(window, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    sfRenderWindow_setVerticalSyncEnabled(window, sfTrue);
    return (window);
}

void initialize_data(data_t *data)
{
    data->font = sfFont_createFromFile("style/font.ttf");
    data->window = create_window();
    data->s_map = sfSprite_create();
    data->t_map = sfTexture_createFromFile("img/map.png", NULL);
    sfSprite_setTexture(data->s_map, data->t_map, sfTrue);
}
