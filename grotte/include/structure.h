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

typedef struct textures_s
{
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
    sfRenderWindow *window;
    sfEvent event;
    textures_t textures;
    text_1_t text1;
    text_2_t text2;
    text_3_t text3;
    text_4_t text4;
    bite_t timer;
    command_t command;
}data_t;

#endif
