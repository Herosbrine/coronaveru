/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** initialization.c
*/

#include "game.h"
#include "my.h"
#include <stdlib.h>

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode, "CORONAVIRUS",
    sfFullscreen | sfClose, NULL);
    sfRenderWindow_setKeyRepeatEnabled(window, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void initialize_data(data_t *data)
{
    data->animation_number = 1;
    data->begin_animation = ON;
    data->font = sfFont_createFromFile("style/font.ttf");
    data->window = create_window();
    data->s_map = sfSprite_create();
    data->textures.map = sfTexture_createFromFile("img/map.png", NULL);
    sfSprite_setTexture(data->s_map, data->textures.map, sfTrue);
    initialize_players(data);
    initialize_bots(data);
}

int random_number(int nb1, int nb2)
{
    int a = 0;

    a = rand() % (nb2 - nb1) + 1 + nb1;
    return (a);
}

void initialize_bots(data_t *data)
{
    data->number_of_bots = NUMBER_OF_BOTS;
    data->bot_list = malloc(sizeof(data->bot) * data->number_of_bots);
    data->textures.bot = sfTexture_createFromFile("img/women_bot.png", NULL);

    for (int i = 0; i < data->number_of_bots; i++){
        data->bot_list[i].sprite = sfSprite_create();
        data->bot_list[i].clock = sfClock_create();
        data->bot_list[i].is_infected = 0;
        data->bot_list[i].id = random_number(0, NUMBER_OF_ID);
        data->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
        data->bot_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
        data->bot_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
        sfSprite_setTexture(data->bot_list[i].sprite, data->textures.bot, sfTrue);
        if (data->bot_list[i].direction == LEFT && data->bot_list[i].id == 1){
            data->bot_list[i].rect.left = 166;
            data->bot_list[i].rect.top = 80;
            data->bot_list[i].rect.height = 80;
            data->bot_list[i].rect.width = 46;
        }
        if (data->bot_list[i].direction == RIGHT && data->bot_list[i].id == 1){
            data->bot_list[i].rect.left = 160;
            data->bot_list[i].rect.top = 160;
            data->bot_list[i].rect.height = 79;
            data->bot_list[i].rect.width = 45;
        }
        if (data->bot_list[i].direction == UP && data->bot_list[i].id == 1){
            data->bot_list[i].rect.left = 168;
            data->bot_list[i].rect.top = 241;
            data->bot_list[i].rect.height = 77;
            data->bot_list[i].rect.width = 37;
        }
        if (data->bot_list[i].direction == DOWN && data->bot_list[i].id == 1){
            data->bot_list[i].rect.left = 167;
            data->bot_list[i].rect.top = 4;
            data->bot_list[i].rect.height = 76;
            data->bot_list[i].rect.width = 35;
        }
        sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
        sfSprite_setTextureRect(data->bot_list[i].sprite, data->bot_list[i].rect);
     }
     for (int i = 0; i < data->number_of_bots; i++)
         printf("bot number : %d -> x : %d, y : %d\n", i + 1, data->bot_list[i].pos_x, data->bot_list[i].pos_y);
}

void initialize_players(data_t *data)
{
    data->players_list = malloc(sizeof(data->players) * 2);
    data->textures.player_one = sfTexture_createFromFile("img/player_one.png", NULL);
    data->textures.player_two = sfTexture_createFromFile("img/player_two.png", NULL);
    for (int i = 0; i < 2; i++){
       data->players_list[i].sprite = sfSprite_create();
       data->players_list[i].direction = DOWN;
       data->players_list[i].clock = sfClock_create();
    }
    sfSprite_setTexture(data->players_list[0].sprite, data->textures.player_one, sfTrue);
    data->players_list[0].pos_x = 980;
    data->players_list[0].pos_y = 1100;

    sfSprite_setTexture(data->players_list[1].sprite, data->textures.player_two, sfTrue);
    data->players_list[1].pos_x = 905;
    data->players_list[1].pos_y = 1100;

    for (int i = 0; i < 2; i++){
        data->players_list[i].rect.left = 0;
        data->players_list[i].rect.top = 0;
        data->players_list[i].rect.height = 78;
        data->players_list[i].rect.width = 38;
        sfSprite_setPosition(data->players_list[i].sprite, (sfVector2f) {data->players_list[i].pos_x, data->players_list[i].pos_y});
        sfSprite_setTextureRect(data->players_list[i].sprite, data->players_list[i].rect);
    }
}
