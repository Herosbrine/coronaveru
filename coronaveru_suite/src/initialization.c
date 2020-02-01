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
    sfRenderWindow_setFramerateLimit(window, 60);
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

void initialize_bot_id(data_t *data, int w1, int h1, int l1, int t1, int w2, int h2, int l2, int t2, int w3, int h3, int l3, int t3, int w4, int h4, int l4, int t4, int i)
{
    if (data->bot_list[i].direction == DOWN){
        data->bot_list[i].rect.left = l1;
        data->bot_list[i].rect.top = t1;
        data->bot_list[i].rect.height = h1;
        data->bot_list[i].rect.width = w1;
    }
    if (data->bot_list[i].direction == LEFT){
        data->bot_list[i].rect.left = l2;
        data->bot_list[i].rect.top = t2;
        data->bot_list[i].rect.height = h2;
        data->bot_list[i].rect.width = w2;
    }
    if (data->bot_list[i].direction == RIGHT){
        data->bot_list[i].rect.left = l3;
        data->bot_list[i].rect.top = t3;
        data->bot_list[i].rect.height = h3;
        data->bot_list[i].rect.width = w3;
    }
    if (data->bot_list[i].direction == UP){
        data->bot_list[i].rect.left = l4;
        data->bot_list[i].rect.top = t4;
        data->bot_list[i].rect.height = h4;
        data->bot_list[i].rect.width = w4;
    }
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
        data->bot_list[i].speed = random_number(SPEED_BOT_MIN, SPEED_BOT_MAX);
        data->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
        sfSprite_setTexture(data->bot_list[i].sprite, data->textures.bot, sfTrue);
        if (data->bot_list[i].id == 1)
            initialize_bot_id(data, 34, 74, 62, 4, 45, 76, 60, 83, 45, 75, 56, 163, 34, 74, 63, 243, i);
        if (data->bot_list[i].id == 2)
            initialize_bot_id(data, 36, 76, 219, 4, 43, 77, 220, 82, 43, 77, 214, 161, 37, 76, 222, 241, i);
        if (data->bot_list[i].id == 3)
            initialize_bot_id(data, 41, 71, 376, 8, 39, 73, 379, 86, 39, 73, 376, 165, 42, 73, 377, 244, i);
        if (data->bot_list[i].id == 4)
            initialize_bot_id(data, 33, 75, 539, 4, 43, 77, 537, 81, 44, 77, 532, 161, 33, 76, 539, 240, i);
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
