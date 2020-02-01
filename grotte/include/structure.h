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

typedef struct texture_s
{
    sfTexture *wall;
    sfTexture *layer_a;
    sfTexture *layer_b;
    sfTexture *layer_c;
    sfTexture *chauffe_souris;
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
} chauffe_souris_t;

typedef struct data_s
{
    sfRenderWindow *window;
    texture_t texture;
    sprite_grotte_t sprite_grotte;
    map_grotte_pos_t map_grotte_pos;
    chauffe_souris_t *chauffe_souris_tab;
} data_t;

#endif