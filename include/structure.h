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



typedef struct texture_s
{
    sfTexture *wall;
    sfTexture *layer_a;
    sfTexture *layer_b;
    sfTexture *layer_c;
    sfTexture *layer_d;
    sfTexture *layer_e;
} texture_t;

typedef struct sprite_grotte_s
{
    sfSprite *wall;
    sfSprite *layer_a;
    sfSprite *layer_b;
    sfSprite *layer_c;
    sfSprite *layer_d;
    sfSprite *layer_e;
    sfSprite *layer_a_next;
    sfSprite *layer_b_next;
    sfSprite *layer_c_next;
    sfSprite *layer_d_next;
    sfSprite *layer_e_next;
} sprite_grotte_t;

typedef struct data_s
{
    sfRenderWindow *window;
    texture_t texture;
    sprite_grotte_t sprite_grotte;
} data_t;

#endif