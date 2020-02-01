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

/* DIRECTION */
#define UP      1
#define DOWN    2
#define LEFT    3
#define RIGHT   4
#define NUMBER_OF_DIRECTION   4

/* ACTIVATE/DESACTIVATE */
#define OFF     0
#define ON      1

/* BOTS PARAMETERS */
#define NUMBER_OF_BOTS        15
#define BOTS_INFECTED         4
#define NUMBER_OF_ID          8
#define NUMBER_OF_DIRECTION   4
#define SPEED_BOT_MIN         2
#define SPEED_BOT_MAX         6
#define SPEED_BOT_INFECTED    SPEED_BOT_MAX / 2

/* MAP PARAMETERS */
#define MIN_X                 42
#define MAX_X                 1838
#define MIN_Y                 126
#define MAX_Y                 958
#define MILLISECOND_PER_SOIN  1000
#define LIMIT_SOIN            10

/* PLAYERS PARAMETER */
#define SPEED_PLAYER_ONE      5
#define SPEED_PLAYER_TWO      5

/* RANDOM CHANGE DIRECTION */
#define MIN_CH_DIR            30
#define MAX_CH_DIR            400

/* OTHERS */
#define SOINS_LIST 10

typedef struct textures_s
{
    sfTexture *soin;
    sfTexture *exit;
    sfTexture *player_one;
    sfTexture *player_two;
    sfTexture *bot;
    sfTexture *map;
}textures_t;

typedef struct soins_s
{
    int active;
    sfSprite *sprite;
    int pos_x;
    int pos_y;
}soins_t;

typedef struct players_s
{
    int pos_x;
    int pos_y;
    int nb_soin;
    int direction;
    int animation;
    sfIntRect rect;
    sfClock *clock;
    sfSprite *sprite;
}players_t;

typedef struct bot_s
{
    int id;
    int counter_ch_dir;
    int change_direction;
    int speed;
    int pos_x;
    int pos_y;
    int direction;
    int is_infected;
    sfIntRect rect;
    sfClock *clock;
    sfSprite *sprite;
}bot_t;

typedef struct sound_s
{
    sfSound *horror;
}sound_t;

typedef struct sound_buffer_s
{
    sfSoundBuffer *horror;
}sound_buffer_t;

typedef struct text_s
{
    sfText *wave_txt;
    sfText *wave_int;
    sfText *antidote1_txt;
    sfText *antidote1_int;
    sfText *antidote2_txt;
    sfText *antidote2_int;
}text_t;

typedef struct data_s
{
    int sound_active;
    int wave;
    sfRenderWindow *window;
    sfFont *font;
    sfClock *soin_generator;
    sfEvent event;
    int soin_active;
    int number_of_bots;
    int begin_animation;
    int animation_number;
    sfSprite *s_map;
    sfSprite *exit_sprite;
    soins_t soins;
    soins_t *soins_list;
    bot_t bot;
    bot_t *bot_list;
    textures_t textures;
    players_t players;
    players_t *players_list;
    text_t text;
    sound_buffer_t sound_buffer;
    sound_t sound;
}data_t;

/* INITIALIZE GAME */
sfRenderWindow *create_window(void);
void initialize_data(data_t *data);
void initialize_players(data_t *data);
void initialize_bots(data_t *data);
void game_instruction(data_t *data);
int random_number(int nb1, int nb2);

#endif /* GAME_H_ */
