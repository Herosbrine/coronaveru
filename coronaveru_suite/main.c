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
        data->players_list[1].pos_y -= SPEED_PLAYER_TWO;
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
        data->players_list[0].pos_y -= SPEED_PLAYER_TWO;
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
        data->players_list[0].pos_x += SPEED_PLAYER_ONE;
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
        data->players_list[1].pos_x -= SPEED_PLAYER_TWO;
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
        data->players_list[0].pos_y += SPEED_PLAYER_ONE;
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
        data->players_list[1].pos_y += SPEED_PLAYER_TWO;
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

void do_animation_bot(data_t *data, int w1, int h1, int l1, int t1, int w2, int h2, int l2, int t2, int w3, int h3, int l3, int t3, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[i].clock)) > 600)
        sfClock_restart(data->bot_list[i].clock);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[i].clock)) > 400
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[i].clock)) <= 600){
        data->bot_list[i].rect.left = l3;
        data->bot_list[i].rect.top = t3;
        data->bot_list[i].rect.height = h3;
        data->bot_list[i].rect.width = w3;
        sfSprite_setTextureRect(data->bot_list[i].sprite, data->bot_list[i].rect);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[1].clock)) > 200
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[1].clock)) <= 400){
        data->bot_list[i].rect.left = l2;
        data->bot_list[i].rect.top = t2;
        data->bot_list[i].rect.height = h2;
        data->bot_list[i].rect.width = w2;
        sfSprite_setTextureRect(data->bot_list[i].sprite, data->bot_list[i].rect);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[i].clock)) > 0
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data->bot_list[i].clock)) <= 200){
        data->bot_list[i].rect.left = l1;
        data->bot_list[i].rect.top = t1;
        data->bot_list[i].rect.height = h1;
        data->bot_list[i].rect.width = w1;
        sfSprite_setTextureRect(data->bot_list[i].sprite, data->bot_list[i].rect);
    }
}

void game_instruction(data_t *data)
{
    do_begin_animation(data);
    // BOTS //
    if (data->begin_animation == 0){
        for (int i = 0; i < data->number_of_bots; i++){
            if (data->bot_list[i].change_direction < data->bot_list[i].counter_ch_dir){
                data->bot_list[i].counter_ch_dir = 0;
                data->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
                data->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
            }
            if (data->bot_list[i].direction == DOWN && data->bot_list[i].pos_y >= MAX_Y
            || data->bot_list[i].direction == LEFT && data->bot_list[i].pos_x <= MIN_X
            || data->bot_list[i].direction == RIGHT && data->bot_list[i].pos_x >= MAX_X
            || data->bot_list[i].direction == UP && data->bot_list[i].pos_y <= MIN_Y){
                data->bot_list[i].counter_ch_dir = 0;
                data->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
                data->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
            }
            for (int j = i; j < data->number_of_bots; j++){
                if (data->bot_list[j].is_infected == 1 || data->bot_list[i].is_infected == 1){
                    if (data->bot_list[j].pos_x >= data->bot_list[i].pos_x && data->bot_list[j].pos_x <= data->bot_list[i].pos_x + data->bot_list[i].rect.width
                        && data->bot_list[j].pos_y >= data->bot_list[i].pos_y && data->bot_list[j].pos_y <= data->bot_list[i].pos_y + data->bot_list[i].rect.height ||
                        data->bot_list[i].pos_x >= data->bot_list[j].pos_x && data->bot_list[i].pos_x <= data->bot_list[j].pos_x + data->bot_list[j].rect.width
                        && data->bot_list[i].pos_y >= data->bot_list[j].pos_y && data->bot_list[i].pos_y <= data->bot_list[j].pos_y + data->bot_list[j].rect.height){
                        data->bot_list[j].is_infected = 1;
                        data->bot_list[i].is_infected = 1;
                    }
                }
            }
            if (data->bot_list[i].is_infected == 1) {
                data->bot_list[i].speed = SPEED_BOT_INFECTED;
                sfSprite_setColor(data->bot_list[i].sprite, sfColor_fromRGBA(255, 20, 20, 150));
            }
            if (data->bot_list[i].direction == DOWN && data->bot_list[i].pos_y < MAX_Y){
                data->bot_list[i].counter_ch_dir += data->bot_list[i].speed;
                data->bot_list[i].pos_y += data->bot_list[i].speed;
                sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
                if (data->bot_list[i].id == 1)
                    do_animation_bot(data, 33, 74, 10, 5, 34, 74, 62, 4, 35, 74, 115, 5, i);
                if (data->bot_list[i].id == 2)
                    do_animation_bot(data, 35, 74, 168, 5, 36, 76, 219, 4, 37, 75, 272, 5, i);
                if (data->bot_list[i].id == 3)
                    do_animation_bot(data, 42, 70, 323, 9, 41, 71, 376, 8, 42, 70, 430, 9, i);
                if (data->bot_list[i].id == 4)
                    do_animation_bot(data, 34, 74, 486, 4, 33, 75, 539, 4, 33, 74, 592, 5, i);
                if (data->bot_list[i].id == 5)
                    do_animation_bot(data, 37, 77, 8, 322, 38, 78, 61, 321, 38, 77, 114, 321, i);
                if (data->bot_list[i].id == 6)
                    do_animation_bot(data, 34, 76, 169, 322, 33, 77, 222, 321, 34, 76, 275, 322, i);
                if (data->bot_list[i].id == 7)
                    do_animation_bot(data, 33, 75, 328, 321, 32, 76, 381, 320, 34, 75, 433, 321, i);
                if (data->bot_list[i].id == 8)
                    do_animation_bot(data, 38, 76, 484, 320, 38, 77, 538, 319, 36, 77, 591, 320, i);
            }
            if (data->bot_list[i].direction == LEFT && data->bot_list[i].pos_x > MIN_X){
                data->bot_list[i].counter_ch_dir += data->bot_list[i].speed;
                data->bot_list[i].pos_x -= data->bot_list[i].speed;
                sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
                if (data->bot_list[i].id == 1)
                    do_animation_bot(data, 46, 74, 7, 85, 45, 76, 60, 83, 44, 74, 113, 85, i);
                if (data->bot_list[i].id == 2)
                    do_animation_bot(data, 45, 77, 167, 82, 43, 77, 220, 82, 42, 76, 273, 83, i);
                if (data->bot_list[i].id == 3)
                    do_animation_bot(data, 40, 72, 327, 87, 39, 73, 379, 86, 39, 72, 431, 88, i);
                if (data->bot_list[i].id == 4)
                    do_animation_bot(data, 45, 77, 484, 81, 43, 77, 537, 81, 42, 76, 590, 82, i);
                if (data->bot_list[i].id == 5)
                    do_animation_bot(data, 38, 78, 8, 400, 37, 78, 61, 400, 37, 77, 114, 400, i);
                if (data->bot_list[i].id == 6)
                    do_animation_bot(data, 35, 76, 168, 402, 35, 77, 220, 400, 35, 76, 273, 401, i);
                if (data->bot_list[i].id == 7)
                    do_animation_bot(data, 30, 76, 330, 400, 30, 77, 383, 399, 31, 76, 435, 400, i);
                if (data->bot_list[i].id == 8)
                    do_animation_bot(data, 36, 78, 485, 399, 36, 78, 539, 398, 36, 77, 591, 400, i);
            }
            if (data->bot_list[i].direction == RIGHT && data->bot_list[i].pos_x < MAX_X){
                data->bot_list[i].counter_ch_dir += data->bot_list[i].speed;
                data->bot_list[i].pos_x += data->bot_list[i].speed;
                sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
                if (data->bot_list[i].id == 1)
                    do_animation_bot(data, 46, 74, 3, 164, 45, 75, 56, 163, 43, 74, 110, 164, i);
                if (data->bot_list[i].id == 2)
                    do_animation_bot(data, 44, 77, 160, 161, 43, 77, 214, 161, 42, 75, 268, 164, i);
                if (data->bot_list[i].id == 3)
                    do_animation_bot(data, 39, 72, 323, 166, 39, 73, 376, 165, 39, 72, 429, 166, i);
                if (data->bot_list[i].id == 4)
                    do_animation_bot(data, 45, 77, 477, 160, 44, 77, 532, 161, 42, 76, 585, 162, i);
                if (data->bot_list[i].id == 5)
                    do_animation_bot(data, 36, 78, 10, 479, 36, 78, 62, 478, 36, 76, 115, 480, i);
                if (data->bot_list[i].id == 6)
                    do_animation_bot(data, 35, 75, 170, 482, 35, 76, 223, 481, 35, 75, 276, 481, i);
                if (data->bot_list[i].id == 7)
                    do_animation_bot(data, 30, 75, 330, 480, 30, 76, 382, 479, 30, 75, 436, 480, i);
                if (data->bot_list[i].id == 8)
                    do_animation_bot(data, 37, 78, 485, 477, 37, 78, 538, 477, 37, 77, 591, 478, i);
            }
            if (data->bot_list[i].direction == UP && data->bot_list[i].pos_y > MIN_Y){
                data->bot_list[i].counter_ch_dir += data->bot_list[i].speed;
                data->bot_list[i].pos_y -= data->bot_list[i].speed;
                sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
                if (data->bot_list[i].id == 1)
                    do_animation_bot(data, 34, 73, 11, 244, 34, 74, 63, 243, 34, 73, 116, 244, i);
                if (data->bot_list[i].id == 2)
                    do_animation_bot(data, 36, 75, 169, 242, 37, 76, 222, 241, 36, 75, 275, 242, i);
                if (data->bot_list[i].id == 3)
                    do_animation_bot(data, 41, 72, 323, 246, 42, 73, 377, 244, 40, 72, 430, 245, i);
                if (data->bot_list[i].id == 4)
                    do_animation_bot(data, 33, 75, 487, 241, 33, 76, 539, 240, 32, 75, 592, 241, i);
                if (data->bot_list[i].id == 5)
                    do_animation_bot(data, 39, 76, 8, 558, 39, 76, 61, 558, 38, 75, 115, 560, i);
                if (data->bot_list[i].id == 6)
                    do_animation_bot(data, 33, 74, 169, 560, 33, 75, 222, 560, 32, 74, 275, 560, i);
                if (data->bot_list[i].id == 7)
                    do_animation_bot(data, 32, 75, 328, 560, 33, 76, 381, 559, 33, 75, 433, 560, i);
                if (data->bot_list[i].id == 8)
                    do_animation_bot(data, 39, 77, 483, 557, 38, 77, 536, 557, 38, 76, 589, 559, i);
            }
        }
    }
    // PLAYER 1 //
    if (data->players_list[0].animation == ON && data->begin_animation == 0){
        if (data->players_list[0].direction == LEFT && data->players_list[0].pos_x > MIN_X){
            data->players_list[0].pos_x -= SPEED_PLAYER_TWO;
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
            data->players_list[0].pos_x += SPEED_PLAYER_ONE;
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
            data->players_list[0].pos_y += SPEED_PLAYER_ONE;
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
            data->players_list[0].pos_y -= SPEED_PLAYER_TWO;
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
            data->players_list[1].pos_x -= SPEED_PLAYER_TWO;
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
            data->players_list[1].pos_x += SPEED_PLAYER_TWO;
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
            data->players_list[1].pos_y += SPEED_PLAYER_TWO;
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
            data->players_list[1].pos_y -= SPEED_PLAYER_TWO;
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
    while (sfRenderWindow_isOpen(data->window)){
        events_handling(data);
        game_instruction(data);
        display_game(data);
    }
}

int main(int ac, char **av)
{
    data_t data;

    srand(time(NULL));
    initialize_data(&data);
    game_loop(&data);
    return (0);
}
