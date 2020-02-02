/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"
#include "macro.h"

void event_gestion(d_t *d)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(d->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(d->window);
        if (event.type == sfEvtMouseMoved) {
            d->mouse_move_x = event.mouseMove.x - (171 / 2);
            d->mouse_move_y = event.mouseMove.y - (171 / 2);
            sfSprite_setPosition(d->sprite_grotte.scope, (sfVector2f){d->mouse_move_x, d->mouse_move_y});
        }
        /*if (d->active_click == 1 && GET_TIME(d->button_clock) <= 150) {
            d->mouse_button_x = 0;
            d->mouse_button_y = 0;
            d->active_click = 0;
        } else {*/
            if (sfMouse_isButtonPressed(sfMouseLeft)){
                d->mouse_button_x = event.mouseButton.x;
                d->mouse_button_y = event.mouseButton.y;
                d->active_click = 1;
                //sfClock_restart(d->button_clock);
            } else
            {
                d->mouse_button_x = 0;
                d->mouse_button_y = 0;
                d->active_click = 0;
            }
    }
}
