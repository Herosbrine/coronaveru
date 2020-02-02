/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** disp map grotte
*/

#include "structure.h"

void disp_map(d_t *d)
{
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_a, NULL);
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_a_next, NULL);
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_b, NULL);
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_b_next, NULL);
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_c, NULL);
    sfRenderWindow_drawSprite(d->window, d->sprite_grotte.layer_c_next, NULL);
}
