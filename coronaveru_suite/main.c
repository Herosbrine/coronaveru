/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** main.c
*/

#include "game.h"
#include "my.h"

void display_game(data_t *data)
{
    sfRenderWindow_clear(data->window, sfBlack);
    sfRenderWindow_drawSprite(data->window, data->s_map, NULL);
    for (int i = 0; i < data->number_of_bots; i++)
        sfRenderWindow_drawSprite(data->window, data->bot_list[i].sprite, NULL);
    if (data->players_list[0].pos_y >= data->players_list[1].pos_y){
        sfRenderWindow_drawSprite(data->window, data->players_list[1].sprite, NULL);
        sfRenderWindow_drawSprite(data->window, data->players_list[0].sprite, NULL);
    }
    else {
        sfRenderWindow_drawSprite(data->window, data->players_list[0].sprite, NULL);
        sfRenderWindow_drawSprite(data->window, data->players_list[1].sprite, NULL);
    }
    sfRenderWindow_display(data->window);
}

void events_handling(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)){
        if (data->event.type == sfEvtClosed)
            sfRenderWindow_close(data->window);
        // PLAYER 1
        if (data->begin_animation == OFF){
            if (sfKeyboard_isKeyPressed(sfKeyDown) && data->players_list[0].direction != DOWN){
                sfClock_restart(data->players_list[0].clock);
                data->players_list[0].animation = ON;
                data->players_list[0].direction = DOWN;
            }
            if (sfKeyboard_isKeyPressed(sfKeyUp) && data->players_list[0].direction != UP){
                sfClock_restart(data->players_list[0].clock);
                data->players_list[0].animation = ON;
                data->players_list[0].direction = UP;
            }
            if (sfKeyboard_isKeyPressed(sfKeyRight) && data->players_list[0].direction != RIGHT){
                sfClock_restart(data->players_list[0].clock);
                data->players_list[0].animation = ON;
                data->players_list[0].direction = RIGHT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyLeft) && data->players_list[0].direction != LEFT){
                sfClock_restart(data->players_list[0].clock);
                data->players_list[0].animation = ON;
                data->players_list[0].direction = LEFT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyUp) == 0 && sfKeyboard_isKeyPressed(sfKeyDown) == 0 && sfKeyboard_isKeyPressed(sfKeyRight) == 0 && sfKeyboard_isKeyPressed(sfKeyLeft) == 0){
                data->players_list[0].animation = OFF;
                sfClock_restart(data->players_list[0].clock);
                if (data->players_list[0].direction == UP){
                    data->players_list[0].rect.left = 38;
                    data->players_list[0].rect.top = 237;
                    data->players_list[0].rect.height = 78;
                    data->players_list[0].rect.width = 39;
                }
                if (data->players_list[0].direction == DOWN){
                    data->players_list[0].rect.left = 38;
                    data->players_list[0].rect.top = 0;
                    data->players_list[0].rect.height = 77;
                    data->players_list[0].rect.width = 40;
                }
                if (data->players_list[0].direction == RIGHT){
                    data->players_list[0].rect.left = 45;
                    data->players_list[0].rect.top = 157;
                    data->players_list[0].rect.height = 79;
                    data->players_list[0].rect.width = 29;
                }
                if (data->players_list[0].direction == LEFT){
                    data->players_list[0].rect.left = 43;
                    data->players_list[0].rect.top = 78;
                    data->players_list[0].rect.height = 78;
                    data->players_list[0].rect.width = 30;
                }
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
                data->players_list[0].direction = 0;
            }

            // PLAYER 2
            if (sfKeyboard_isKeyPressed(sfKeyS) && data->players_list[1].direction != DOWN){
                sfClock_restart(data->players_list[1].clock);
                data->players_list[1].animation = ON;
                data->players_list[1].direction = DOWN;
            }
            if (sfKeyboard_isKeyPressed(sfKeyZ) && data->players_list[1].direction != UP){
                sfClock_restart(data->players_list[1].clock);
                data->players_list[1].animation = ON;
                data->players_list[1].direction = UP;
            }
            if (sfKeyboard_isKeyPressed(sfKeyD) && data->players_list[1].direction != RIGHT){
                sfClock_restart(data->players_list[1].clock);
                data->players_list[1].animation = ON;
                data->players_list[1].direction = RIGHT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyQ) && data->players_list[1].direction != LEFT){
                sfClock_restart(data->players_list[1].clock);
                data->players_list[1].animation = ON;
                data->players_list[1].direction = LEFT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyZ) == 0 && sfKeyboard_isKeyPressed(sfKeyS) == 0 && sfKeyboard_isKeyPressed(sfKeyD) == 0 && sfKeyboard_isKeyPressed(sfKeyQ) == 0){
                data->players_list[1].animation = OFF;
                sfClock_restart(data->players_list[1].clock);
                if (data->players_list[1].direction == UP){
                    data->players_list[1].rect.left = 39;
                    data->players_list[1].rect.top = 231;
                    data->players_list[1].rect.height = 76;
                    data->players_list[1].rect.width = 38;
                }
                if (data->players_list[1].direction == DOWN){
                    data->players_list[1].rect.left = 39;
                    data->players_list[1].rect.top = 0;
                    data->players_list[1].rect.height = 77;
                    data->players_list[1].rect.width = 38;
                }
                if (data->players_list[1].direction == RIGHT){
                    data->players_list[1].rect.left = 39;
                    data->players_list[1].rect.top = 154;
                    data->players_list[1].rect.height = 77;
                    data->players_list[1].rect.width = 39;
                }
                if (data->players_list[1].direction == LEFT){
                    data->players_list[1].rect.left = 39;
                    data->players_list[1].rect.top = 77;
                    data->players_list[1].rect.height = 77;
                    data->players_list[1].rect.width = 38;
                }
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
                data->players_list[1].direction = 0;
            }
        }
    }
}

void do_begin_animation(data_t *data)
{
    // GO UP //
    if (data->players_list[0].pos_y > 800 && data->animation_number == 1){
        // PLAYER 1 //
        data->players_list[1].pos_y -= 2;
        sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
            sfClock_restart(data->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
            data->players_list[1].rect.left = 0;
            data->players_list[1].rect.top = 232;
            data->players_list[1].rect.height = 75;
            data->players_list[1].rect.width = 39;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
            data->players_list[1].rect.left = 39;
            data->players_list[1].rect.top = 231;
            data->players_list[1].rect.height = 76;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
            data->players_list[1].rect.left = 77;
            data->players_list[1].rect.top = 232;
            data->players_list[1].rect.height = 75;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        // PLAYER 2 //
        data->players_list[0].pos_y -= 2;
        sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
            sfClock_restart(data->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
            data->players_list[0].rect.left = 78;
            data->players_list[0].rect.top = 239;
            data->players_list[0].rect.height = 76;
            data->players_list[0].rect.width = 37;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
            data->players_list[0].rect.left = 38;
            data->players_list[0].rect.top = 237;
            data->players_list[0].rect.height = 78;
            data->players_list[0].rect.width = 39;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
            data->players_list[0].rect.left = 0;
            data->players_list[0].rect.top = 238;
            data->players_list[0].rect.height = 77;
            data->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
    }
    else {
        if (data->animation_number == 1)
            data->animation_number = 2;
    }
    if (data->players_list[0].pos_x < 1200 && data->animation_number == 2){
        data->players_list[0].pos_x += 2;
        sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
            sfClock_restart(data->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
            data->players_list[0].rect.left = 77;
            data->players_list[0].rect.top = 158;
            data->players_list[0].rect.height = 78;
            data->players_list[0].rect.width = 37;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
            data->players_list[0].rect.left = 45;
            data->players_list[0].rect.top = 157;
            data->players_list[0].rect.height = 79;
            data->players_list[0].rect.width = 29;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
            data->players_list[0].rect.left = 6;
            data->players_list[0].rect.top = 158;
            data->players_list[0].rect.height = 80;
            data->players_list[0].rect.width = 30;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        data->players_list[1].pos_x -= 2;
        sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
            sfClock_restart(data->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
            data->players_list[1].rect.left = 77;
            data->players_list[1].rect.top = 77;
            data->players_list[1].rect.height = 77;
            data->players_list[1].rect.width = 37;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        // NORMAL PLAYER //
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
            data->players_list[1].rect.left = 39;
            data->players_list[1].rect.top = 77;
            data->players_list[1].rect.height = 77;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
            data->players_list[1].rect.left = 0;
            data->players_list[1].rect.top = 78;
            data->players_list[1].rect.height = 76;
            data->players_list[1].rect.width = 40;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
    }
    else {
        if (data->animation_number == 2)
            data->animation_number = 3;
    }
    if (data->players_list[0].pos_y < 885 && data->animation_number == 3){
        data->players_list[0].pos_y += 2;
        sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
            sfClock_restart(data->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
            data->players_list[0].rect.left = 77;
            data->players_list[0].rect.top = 0;
            data->players_list[0].rect.height = 77;
            data->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
            data->players_list[0].rect.left = 39;
            data->players_list[0].rect.top = 0;
            data->players_list[0].rect.height = 77;
            data->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
            data->players_list[0].rect.left = 0;
            data->players_list[0].rect.top = 0;
            data->players_list[0].rect.height = 78;
            data->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
        }
        data->players_list[1].pos_y += 2;
        sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
            sfClock_restart(data->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
            data->players_list[1].rect.left = 77;
            data->players_list[1].rect.top = 0;
            data->players_list[1].rect.height = 77;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
            data->players_list[1].rect.left = 39;
            data->players_list[1].rect.top = 0;
            data->players_list[1].rect.height = 77;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
            data->players_list[1].rect.left = 0;
            data->players_list[1].rect.top = 0;
            data->players_list[1].rect.height = 78;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
        }
    }
    else {
        if (data->animation_number == 3){
            data->players_list[1].rect.left = 39;
            data->players_list[1].rect.top = 0;
            data->players_list[1].rect.height = 77;
            data->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            data->players_list[0].rect.left = 39;
            data->players_list[0].rect.top = 0;
            data->players_list[0].rect.height = 77;
            data->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            data->begin_animation = OFF;
            data->animation_number = 0;
        }
    }
}

void game_instruction(data_t *data)
{
    do_begin_animation(data);
    // PLAYER 1 //
    if (data->players_list[0].animation == ON && data->begin_animation == 0){
        if (data->players_list[0].direction == LEFT && data->players_list[0].pos_x > MIN_X){
            data->players_list[0].pos_x -= 2;
            sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
                sfClock_restart(data->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
                data->players_list[0].rect.left = 2;
                data->players_list[0].rect.top = 78;
                data->players_list[0].rect.height = 78;
                data->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
                data->players_list[0].rect.left = 43;
                data->players_list[0].rect.top = 78;
                data->players_list[0].rect.height = 78;
                data->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
                data->players_list[0].rect.left = 80;
                data->players_list[0].rect.top = 79;
                data->players_list[0].rect.height = 79;
                data->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
        }
        if (data->players_list[0].direction == RIGHT && data->players_list[0].pos_x < MAX_X){
            data->players_list[0].pos_x += 2;
            sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
                sfClock_restart(data->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
                data->players_list[0].rect.left = 77;
                data->players_list[0].rect.top = 158;
                data->players_list[0].rect.height = 78;
                data->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
                data->players_list[0].rect.left = 45;
                data->players_list[0].rect.top = 157;
                data->players_list[0].rect.height = 79;
                data->players_list[0].rect.width = 29;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
                data->players_list[0].rect.left = 6;
                data->players_list[0].rect.top = 158;
                data->players_list[0].rect.height = 80;
                data->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
        }
        if (data->players_list[0].direction == DOWN && data->players_list[0].pos_y < MAX_Y){
            data->players_list[0].pos_y += 2;
            sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
                sfClock_restart(data->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
                data->players_list[0].rect.left = 77;
                data->players_list[0].rect.top = 0;
                data->players_list[0].rect.height = 77;
                data->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
                data->players_list[0].rect.left = 39;
                data->players_list[0].rect.top = 0;
                data->players_list[0].rect.height = 77;
                data->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
                data->players_list[0].rect.left = 0;
                data->players_list[0].rect.top = 0;
                data->players_list[0].rect.height = 78;
                data->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
        }
        if (data->players_list[0].direction == UP && data->players_list[0].pos_y > MIN_Y){
            data->players_list[0].pos_y -= 2;
            sfSprite_setPosition(data->players_list[0].sprite, (sfVector2f) {data->players_list[0].pos_x, data->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 600)
                sfClock_restart(data->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 600){
                data->players_list[0].rect.left = 78;
                data->players_list[0].rect.top = 239;
                data->players_list[0].rect.height = 76;
                data->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 400){
                data->players_list[0].rect.left = 38;
                data->players_list[0].rect.top = 237;
                data->players_list[0].rect.height = 78;
                data->players_list[0].rect.width = 39;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[0].clock)) <= 200){
                data->players_list[0].rect.left = 0;
                data->players_list[0].rect.top = 238;
                data->players_list[0].rect.height = 77;
                data->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[0].sprite, data->players_list[0].rect);
            }
        }
    }
    // PLAYER 2 //
    if (data->players_list[1].animation == ON && data->begin_animation == 0){
        if (data->players_list[1].direction == LEFT && data->players_list[1].pos_x > 42){
            data->players_list[1].pos_x -= 2;
            sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
                sfClock_restart(data->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
                data->players_list[1].rect.left = 77;
                data->players_list[1].rect.top = 77;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 37;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
                data->players_list[1].rect.left = 39;
                data->players_list[1].rect.top = 77;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
                data->players_list[1].rect.left = 0;
                data->players_list[1].rect.top = 78;
                data->players_list[1].rect.height = 76;
                data->players_list[1].rect.width = 40;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
        }
        if (data->players_list[1].direction == RIGHT && data->players_list[1].pos_x < 1838){
            data->players_list[1].pos_x += 2;
            sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
                sfClock_restart(data->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
                data->players_list[1].rect.left = 78;
                data->players_list[1].rect.top = 155;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 36;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
                data->players_list[1].rect.left = 39;
                data->players_list[1].rect.top = 154;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
                data->players_list[1].rect.left = 1;
                data->players_list[1].rect.top = 155;
                data->players_list[1].rect.height = 76;
                data->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
        }
        if (data->players_list[1].direction == DOWN && data->players_list[1].pos_y < 958){
            data->players_list[1].pos_y += 2;
            sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
                sfClock_restart(data->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
                data->players_list[1].rect.left = 77;
                data->players_list[1].rect.top = 0;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
                data->players_list[1].rect.left = 39;
                data->players_list[1].rect.top = 0;
                data->players_list[1].rect.height = 77;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
                data->players_list[1].rect.left = 0;
                data->players_list[1].rect.top = 0;
                data->players_list[1].rect.height = 78;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
        }
        // UP //
        if (data->players_list[1].direction == UP && data->players_list[1].pos_y > 128){
            data->players_list[1].pos_y -= 2;
            sfSprite_setPosition(data->players_list[1].sprite, (sfVector2f) {data->players_list[1].pos_x, data->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 600)
                sfClock_restart(data->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 600){
                data->players_list[1].rect.left = 0;
                data->players_list[1].rect.top = 232;
                data->players_list[1].rect.height = 75;
                data->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 400){
                data->players_list[1].rect.left = 39;
                data->players_list[1].rect.top = 231;
                data->players_list[1].rect.height = 76;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data->players_list[1].clock)) <= 200){
                data->players_list[1].rect.left = 77;
                data->players_list[1].rect.top = 232;
                data->players_list[1].rect.height = 75;
                data->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data->players_list[1].sprite, data->players_list[1].rect);
            }
        }
    }
}

void game_loop(data_t *data)
{
    srand(time(NULL));
    while (sfRenderWindow_isOpen(data->window)){
        events_handling(data);
        game_instruction(data);
        display_game(data);
    }
}

int main(int ac, char **av)
{
    data_t data;

    initialize_data(&data);
    game_loop(&data);
    return (0);
}
