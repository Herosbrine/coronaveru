/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef STRUCTURE_H_
#define STRUCTURE_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Audio.h>

typedef struct texture_s
{
    sfTexture *wall;
    sfTexture *layer_a;
    sfTexture *layer_b;
    sfTexture *layer_c;
    sfTexture *chauffe_souris_lft;
    sfTexture *chauffe_souris_rght;
    sfTexture *t_bat_die;
    sfTexture *t_scope;
} texture_t;

typedef struct sprite_grotte_s
{
    sfSprite *wall;
    sfSprite *layer_a;
    sfSprite *layer_b;
    sfSprite *layer_c;
    sfSprite *layer_a_next;
    sfSprite *layer_b_next;
    sfSprite *layer_c_next;
    sfSprite *chf_souris_left;
    sfSprite *chf_souris_rght;
    sfSprite *scope;
} sprite_grotte_t;

typedef struct map_grotte_pos_s
{
    sfVector2f layer_a;
    sfVector2f layer_b;
    sfVector2f layer_c;
    sfVector2f layer_a_next;
    sfVector2f layer_b_next;
    sfVector2f layer_c_next;
} map_grotte_pos_t;

typedef struct chauffe_souris_s
{
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock;
    int dir_x;
    int dir_y;
    int is_die;
} chauffe_souris_t;

typedef struct my_music_s
{
    sfSoundBuffer *sbang;
    sfSound *bang;
} my_music_t;


typedef struct d_s
{
    sfRenderWindow *window;
    texture_t texture;
    sprite_grotte_t sprite_grotte;
    map_grotte_pos_t map_grotte_pos;
    chauffe_souris_t *chauffe_souris_tab;
    chauffe_souris_t bat_die;
    sfClock *button_clock;
    chauffe_souris_t last_bat_1;
    chauffe_souris_t last_bat_2;
    my_music_t stress_music;
    int nbr_chf_souris;
    int active_dir;
    int active_click;
    int mouse_button_x;
    int mouse_button_y;
    int active_die;
    int nbr_total_bat;
    float mouse_move_x;
    float mouse_move_y;
    int last_bat_alive;
    int active_restart;
    int end_scene;
    int scene_faez;
} d_t;

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
#define MILLISECOND_PER_SOIN  4000
#define LIMIT_SOIN            6

/* PLAYERS PARAMETER */
#define SPEED_PLAYER_ONE      5
#define SPEED_PLAYER_TWO      5

/* RANDOM CHANGE DIRECTION */
#define MIN_CH_DIR            30
#define MAX_CH_DIR            400

/* OTHERS */
#define SOINS_LIST 6

typedef struct textures_s
{
    sfTexture *soin;
    sfTexture *player_one;
    sfTexture *player_two;
    sfTexture *bot;
    sfTexture *map;
    sfTexture *ttext1a;
    sfTexture *ttext1b;
    sfTexture *ttext1c;
    sfTexture *ttext1d;
    sfTexture *ttext1e;
    sfTexture *ttext2a;
    sfTexture *ttext2b;
    sfTexture *ttext2c;
    sfTexture *ttext2d;
    sfTexture *ttext2e;
    sfTexture *ttext3a;
    sfTexture *ttext3b;
    sfTexture *ttext3c;
    sfTexture *ttext3d;
    sfTexture *ttext3e;
    sfTexture *ttext4a;
    sfTexture *ttext4b;
    sfTexture *ttext4c;
    sfTexture *ttext4d;
    sfTexture *ttext4e;
    sfTexture *tcommand;
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

typedef struct text_1_s
{
    sfSprite *stext1a;
    sfSprite *stext1b;
    sfSprite *stext1c;
    sfSprite *stext1d;
    sfSprite *stext1e;
}text_1_t;

typedef struct text_2_s
{
    sfSprite *stext2a;
    sfSprite *stext2b;
    sfSprite *stext2c;
    sfSprite *stext2d;
    sfSprite *stext2e;
}text_2_t;

typedef struct text_3_s
{
    sfSprite *stext3a;
    sfSprite *stext3b;
    sfSprite *stext3c;
    sfSprite *stext3d;
    sfSprite *stext3e;
}text_3_t;

typedef struct text_4_s
{
    sfSprite *stext4a;
    sfSprite *stext4b;
    sfSprite *stext4c;
    sfSprite *stext4d;
    sfSprite *stext4e;
}text_4_t;

typedef struct command_s
{
    sfSprite *scommand;
}command_t;


typedef struct bite_s
{
    sfTime time;
    sfClock *clock;
}bite_t;

typedef struct data_s
{
    int sound_active;
    sfRenderWindow *window;
    sfFont *font;
    sfClock *soin_generator;
    sfEvent event;
    int soin_active;
    int number_of_bots;
    int begin_animation;
    int animation_number;
    sfSprite *s_map;
    soins_t soins;
    soins_t *soins_list;
    bot_t bot;
    bot_t *bot_list;
    textures_t textures;
    players_t players;
    players_t *players_list;
    sound_buffer_t sound_buffer;
    sound_t sound;
    text_1_t text1;
    text_2_t text2;
    text_3_t text3;
    text_4_t text4;
    bite_t timer;
    command_t command;
}data_t;

#endif