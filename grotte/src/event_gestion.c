/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** event gestion
*/

#include "structure.h"

void event_gestion(data_t *data)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(data->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(data->window);
        if (event.type == sfEvtMouseMoved) {
            data->mouse_move_x = event.mouseMove.x - (171 / 2);
            data->mouse_move_y = event.mouseMove.y - (171 / 2);
            sfSprite_setPosition(data->sprite_grotte.scope, (sfVector2f){data->mouse_move_x, data->mouse_move_y});
        }
        if (sfMouse_isButtonPressed(sfMouseLeft)){
            data->mouse_button_x = event.mouseButton.x;
            data->mouse_button_y = event.mouseButton.y;
            data->active_click = 1;
        } else
        {
            data->mouse_button_x = 0;
            data->mouse_button_y = 0;
            data->active_click = 0;
        }
    }
}
