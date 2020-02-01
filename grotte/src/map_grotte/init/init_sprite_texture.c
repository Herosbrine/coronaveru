/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init sprite texture
*/

#include "structure.h"
#include "macro.h"

void init_layer_a(data_t *data)
{
    data->sprite_grotte.layer_a = sfSprite_create();
    data->sprite_grotte.layer_a_next = sfSprite_create();
    sfSprite_setTexture(data->sprite_grotte.layer_a,
    data->texture.layer_a, 0);
    sfSprite_setTexture(data->sprite_grotte.layer_a_next,
    data->texture.layer_a, 0);
}

void init_layer_b(data_t *data)
{
    data->sprite_grotte.layer_b = sfSprite_create();
    data->sprite_grotte.layer_b_next = sfSprite_create();
    sfSprite_setTexture(data->sprite_grotte.layer_b,
    data->texture.layer_b, 0);
    sfSprite_setTexture(data->sprite_grotte.layer_b_next,
    data->texture.layer_b, 0);
}

void init_layer_c(data_t *data)
{
    data->sprite_grotte.layer_c = sfSprite_create();
    data->sprite_grotte.layer_c_next = sfSprite_create();
    sfSprite_setTexture(data->sprite_grotte.layer_c,
    data->texture.layer_c, 0);
    sfSprite_setTexture(data->sprite_grotte.layer_c_next,
    data->texture.layer_c, 0);
}

void init_sprite(data_t *data)
{
    init_layer_a(data);
    init_layer_b(data);
    init_layer_c(data);
}

void init_texture(data_t *data)
{
    data->texture.wall = sfTexture_createFromFile(LAYER_1, NULL);
    data->texture.layer_a = sfTexture_createFromFile(LAYER_2, NULL);
    data->texture.layer_b = sfTexture_createFromFile(LAYER_3, NULL);
    data->texture.layer_c = sfTexture_createFromFile(LAYER_4, NULL);
}

void init_map_grotte_sprite_texture(data_t *data)
{
    init_texture(data);
    init_sprite(data);
}