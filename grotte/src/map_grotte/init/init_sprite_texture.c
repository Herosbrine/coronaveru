/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** init sprite texture
*/

#include "structure.h"
#include "macro.h"

void init_layer_a(d_t *d)
{
    d->sprite_grotte.layer_a = sfSprite_create();
    d->sprite_grotte.layer_a_next = sfSprite_create();
    sfSprite_setTexture(d->sprite_grotte.layer_a,
    d->texture.layer_a, 0);
    sfSprite_setTexture(d->sprite_grotte.layer_a_next,
    d->texture.layer_a, 0);
}

void init_layer_b(d_t *d)
{
    d->sprite_grotte.layer_b = sfSprite_create();
    d->sprite_grotte.layer_b_next = sfSprite_create();
    sfSprite_setTexture(d->sprite_grotte.layer_b,
    d->texture.layer_b, 0);
    sfSprite_setTexture(d->sprite_grotte.layer_b_next,
    d->texture.layer_b, 0);
}

void init_layer_c(d_t *d)
{
    d->sprite_grotte.layer_c = sfSprite_create();
    d->sprite_grotte.layer_c_next = sfSprite_create();
    sfSprite_setTexture(d->sprite_grotte.layer_c,
    d->texture.layer_c, 0);
    sfSprite_setTexture(d->sprite_grotte.layer_c_next,
    d->texture.layer_c, 0);
}

void init_sprite(d_t *d)
{
    init_layer_a(d);
    init_layer_b(d);
    init_layer_c(d);
}

void init_texture(d_t *d)
{
    d->texture.wall = sfTexture_createFromFile(LAYER_1, NULL);
    d->texture.layer_a = sfTexture_createFromFile(LAYER_2, NULL);
    d->texture.layer_b = sfTexture_createFromFile(LAYER_3, NULL);
    d->texture.layer_c = sfTexture_createFromFile(LAYER_4, NULL);
}

void init_map_grotte_sprite_texture(d_t *d)
{
    init_texture(d);
    init_sprite(d);
}