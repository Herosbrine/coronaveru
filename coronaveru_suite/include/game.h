/*
** EPITECH PROJECT, 2019
** game
** File description:
** game.h
*/

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define UP      1
#define DOWN    2
#define LEFT    3
#define RIGHT   4

#define OFF     0
#define ON      1

#define NUMBER_OF_BOTS        15
#define NUMBER_OF_ID          1
#define NUMBER_OF_DIRECTION   4
#define MIN_X                 42
#define MAX_X                 1838
#define MIN_Y                 126
#define MAX_Y                 958

typedef struct textures_s
{
    sfTexture *player_one;
    sfTexture *player_two;
    sfTexture *bot;
    sfTexture *map;
}textures_t;

typedef struct players_s
{
    int pos_x;
    int pos_y;
    int direction;
    int animation;
    sfIntRect rect;
    sfClock *clock;
    sfSprite *sprite;
}players_t;

typedef struct bot_s
{
    int id;
    int pos_x;
    int pos_y;
    int direction;
    int is_infected;
    sfIntRect rect;
    sfClock *clock;
    sfSprite *sprite;
}bot_t;

typedef struct data_s
{
    sfRenderWindow *window;
    sfFont *font;
    sfEvent event;
    int number_of_bots;
    int begin_animation;
    int animation_number;
    sfSprite *s_map;
    bot_t bot;
    bot_t *bot_list;
    textures_t textures;
    players_t players;
    players_t *players_list;
}data_t;

/* INITIALIZE GAME */
sfRenderWindow *create_window(void);
void initialize_data(data_t *data);

#endif /* GAME_H_ */

