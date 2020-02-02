/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** main.c
*/

#include "game.h"
#include "my.h"

void display_game(data2_t *data2)
{
    sfRenderWindow_clear(data2->window, sfBlack);
    sfRenderWindow_drawSprite(data2->window, data2->s_map, NULL);
    sfRenderWindow_drawSprite(data2->window, data2->sound_sprite, NULL);
    // TEXTS //
    sfText_setString(data2->text.antidote1_int, my_int_to_char(data2->players_list[1].nb_soin));
    sfText_setString(data2->text.antidote2_int, my_int_to_char(data2->players_list[0].nb_soin));
    sfText_setString(data2->text.wave_int, my_int_to_char(data2->wave));
    sfRenderWindow_drawText(data2->window, data2->text.antidote1_txt, NULL);
    sfRenderWindow_drawText(data2->window, data2->text.antidote2_txt, NULL);
    sfRenderWindow_drawText(data2->window, data2->text.antidote1_int, NULL);
    sfRenderWindow_drawText(data2->window, data2->text.antidote2_int, NULL);
    sfRenderWindow_drawText(data2->window, data2->text.wave_txt, NULL);
    sfRenderWindow_drawText(data2->window, data2->text.wave_int, NULL);
    // EXIT //
    sfRenderWindow_drawSprite(data2->window, data2->exit_sprite, NULL);
    // ANTIDOTE //
    for (int i = 0; i < SOINS_LIST; i++){
        if (data2->soins_list[i].active == ON)
            sfRenderWindow_drawSprite(data2->window, data2->soins_list[i].sprite, NULL);
    }
    for (int i = 0; i < data2->number_of_bots; i++)
        sfRenderWindow_drawSprite(data2->window, data2->bot_list[i].sprite, NULL);
    // PLAYERS //
    if (data2->players_list[0].pos_y >= data2->players_list[1].pos_y){
        sfRenderWindow_drawSprite(data2->window, data2->players_list[1].sprite, NULL);
        sfRenderWindow_drawSprite(data2->window, data2->players_list[0].sprite, NULL);
    }
    else {
        sfRenderWindow_drawSprite(data2->window, data2->players_list[0].sprite, NULL);
        sfRenderWindow_drawSprite(data2->window, data2->players_list[1].sprite, NULL);
    }
    sfRenderWindow_display(data2->window);
}

void events_handling(data2_t *data2)
{
    int act = 0;

    while (sfRenderWindow_pollEvent(data2->window, &data2->event)){
        if (data2->event.type == sfEvtClosed)
            sfRenderWindow_close(data2->window);
        // PLAYER 1
        if (data2->event.mouseButton.button == sfMouseLeft){
            if (data2->event.mouseButton.x > 1840 && data2->event.mouseButton.x < 1920 && data2->event.mouseButton.y > 0 && data2->event.mouseButton.y < 81)
                exit (0);
            if (data2->event.mouseButton.x > 1763 && data2->event.mouseButton.x < 1830 && data2->event.mouseButton.y > 0 && data2->event.mouseButton.y < 81){
                act = 0;
                if (data2->sound_active == ON && act == 0){
                    data2->sound_rect.left = 0;
                    data2->sound_rect.width = 57;
                    data2->sound_rect.height = 59;
                    sfSprite_setTextureRect(data2->sound_sprite, data2->sound_rect);
                    data2->sound_active = OFF;
                    act = 1;
                }
                if (data2->sound_active == OFF && act == 0){
                    data2->sound_rect.left = 58;
                    data2->sound_rect.width = 62;
                    data2->sound_rect.height = 59;
                    sfSprite_setTextureRect(data2->sound_sprite, data2->sound_rect);
                    data2->sound_active = ON;
                    act = 1;
                }
            }
        }
        if (data2->event.type == sfEvtMouseMoved){
            if (data2->event.mouseMove.x > 1840 && data2->event.mouseMove.x < 1920 && data2->event.mouseMove.y > 0 && data2->event.mouseMove.y < 81){
                sfSprite_setPosition(data2->exit_sprite, (sfVector2f) {1855, 8});
                sfSprite_setScale(data2->exit_sprite, (sfVector2f){1.07, 1.07});
            }
            else {
                sfSprite_setPosition(data2->exit_sprite, (sfVector2f) {1857, 10});
                sfSprite_setScale(data2->exit_sprite, (sfVector2f){1 / 1.07, 1 / 1.07});
            }
        }
        if (data2->begin_animation == OFF){
            if (sfKeyboard_isKeyPressed(sfKeyDown) && data2->players_list[0].direction != DOWN){
                sfClock_restart(data2->players_list[0].clock);
                data2->players_list[0].animation = ON;
                data2->players_list[0].direction = DOWN;
            }
            if (sfKeyboard_isKeyPressed(sfKeyUp) && data2->players_list[0].direction != UP){
                sfClock_restart(data2->players_list[0].clock);
                data2->players_list[0].animation = ON;
                data2->players_list[0].direction = UP;
            }
            if (sfKeyboard_isKeyPressed(sfKeyRight) && data2->players_list[0].direction != RIGHT){
                sfClock_restart(data2->players_list[0].clock);
                data2->players_list[0].animation = ON;
                data2->players_list[0].direction = RIGHT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyLeft) && data2->players_list[0].direction != LEFT){
                sfClock_restart(data2->players_list[0].clock);
                data2->players_list[0].animation = ON;
                data2->players_list[0].direction = LEFT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyUp) == 0 && sfKeyboard_isKeyPressed(sfKeyDown) == 0 && sfKeyboard_isKeyPressed(sfKeyRight) == 0 && sfKeyboard_isKeyPressed(sfKeyLeft) == 0){
                data2->players_list[0].animation = OFF;
                sfClock_restart(data2->players_list[0].clock);
                if (data2->players_list[0].direction == UP){
                    data2->players_list[0].rect.left = 38;
                    data2->players_list[0].rect.top = 237;
                    data2->players_list[0].rect.height = 78;
                    data2->players_list[0].rect.width = 39;
                }
                if (data2->players_list[0].direction == DOWN){
                    data2->players_list[0].rect.left = 38;
                    data2->players_list[0].rect.top = 0;
                    data2->players_list[0].rect.height = 77;
                    data2->players_list[0].rect.width = 40;
                }
                if (data2->players_list[0].direction == RIGHT){
                    data2->players_list[0].rect.left = 45;
                    data2->players_list[0].rect.top = 157;
                    data2->players_list[0].rect.height = 79;
                    data2->players_list[0].rect.width = 29;
                }
                if (data2->players_list[0].direction == LEFT){
                    data2->players_list[0].rect.left = 43;
                    data2->players_list[0].rect.top = 78;
                    data2->players_list[0].rect.height = 78;
                    data2->players_list[0].rect.width = 30;
                }
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
                data2->players_list[0].direction = 0;
            }

            // PLAYER 2
            if (sfKeyboard_isKeyPressed(sfKeyS) && data2->players_list[1].direction != DOWN){
                sfClock_restart(data2->players_list[1].clock);
                data2->players_list[1].animation = ON;
                data2->players_list[1].direction = DOWN;
            }
            if (sfKeyboard_isKeyPressed(sfKeyZ) && data2->players_list[1].direction != UP){
                sfClock_restart(data2->players_list[1].clock);
                data2->players_list[1].animation = ON;
                data2->players_list[1].direction = UP;
            }
            if (sfKeyboard_isKeyPressed(sfKeyD) && data2->players_list[1].direction != RIGHT){
                sfClock_restart(data2->players_list[1].clock);
                data2->players_list[1].animation = ON;
                data2->players_list[1].direction = RIGHT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyQ) && data2->players_list[1].direction != LEFT){
                sfClock_restart(data2->players_list[1].clock);
                data2->players_list[1].animation = ON;
                data2->players_list[1].direction = LEFT;
            }
            if (sfKeyboard_isKeyPressed(sfKeyZ) == 0 && sfKeyboard_isKeyPressed(sfKeyS) == 0 && sfKeyboard_isKeyPressed(sfKeyD) == 0 && sfKeyboard_isKeyPressed(sfKeyQ) == 0){
                data2->players_list[1].animation = OFF;
                sfClock_restart(data2->players_list[1].clock);
                if (data2->players_list[1].direction == UP){
                    data2->players_list[1].rect.left = 39;
                    data2->players_list[1].rect.top = 231;
                    data2->players_list[1].rect.height = 76;
                    data2->players_list[1].rect.width = 38;
                }
                if (data2->players_list[1].direction == DOWN){
                    data2->players_list[1].rect.left = 39;
                    data2->players_list[1].rect.top = 0;
                    data2->players_list[1].rect.height = 77;
                    data2->players_list[1].rect.width = 38;
                }
                if (data2->players_list[1].direction == RIGHT){
                    data2->players_list[1].rect.left = 39;
                    data2->players_list[1].rect.top = 154;
                    data2->players_list[1].rect.height = 77;
                    data2->players_list[1].rect.width = 39;
                }
                if (data2->players_list[1].direction == LEFT){
                    data2->players_list[1].rect.left = 39;
                    data2->players_list[1].rect.top = 77;
                    data2->players_list[1].rect.height = 77;
                    data2->players_list[1].rect.width = 38;
                }
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
                data2->players_list[1].direction = 0;
            }
        }
    }
}

void do_begin_animation(data2_t *data2)
{
    // GO UP //
    if (data2->players_list[0].pos_y > 800 && data2->animation_number == 1){
        // PLAYER 1 //
        data2->players_list[1].pos_y -= SPEED_PLAYER_TWO;
        sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
            sfClock_restart(data2->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
            data2->players_list[1].rect.left = 0;
            data2->players_list[1].rect.top = 232;
            data2->players_list[1].rect.height = 75;
            data2->players_list[1].rect.width = 39;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
            data2->players_list[1].rect.left = 39;
            data2->players_list[1].rect.top = 231;
            data2->players_list[1].rect.height = 76;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
            data2->players_list[1].rect.left = 77;
            data2->players_list[1].rect.top = 232;
            data2->players_list[1].rect.height = 75;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        // PLAYER 2 //
        data2->players_list[0].pos_y -= SPEED_PLAYER_TWO;
        sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
            sfClock_restart(data2->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
            data2->players_list[0].rect.left = 78;
            data2->players_list[0].rect.top = 239;
            data2->players_list[0].rect.height = 76;
            data2->players_list[0].rect.width = 37;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
            data2->players_list[0].rect.left = 38;
            data2->players_list[0].rect.top = 237;
            data2->players_list[0].rect.height = 78;
            data2->players_list[0].rect.width = 39;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
            data2->players_list[0].rect.left = 0;
            data2->players_list[0].rect.top = 238;
            data2->players_list[0].rect.height = 77;
            data2->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
    }
    else {
        if (data2->animation_number == 1)
            data2->animation_number = 2;
    }
    if (data2->players_list[0].pos_x < 1200 && data2->animation_number == 2){
        data2->players_list[0].pos_x += SPEED_PLAYER_ONE;
        sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
            sfClock_restart(data2->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
            data2->players_list[0].rect.left = 77;
            data2->players_list[0].rect.top = 158;
            data2->players_list[0].rect.height = 78;
            data2->players_list[0].rect.width = 37;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
            data2->players_list[0].rect.left = 45;
            data2->players_list[0].rect.top = 157;
            data2->players_list[0].rect.height = 79;
            data2->players_list[0].rect.width = 29;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
            data2->players_list[0].rect.left = 6;
            data2->players_list[0].rect.top = 158;
            data2->players_list[0].rect.height = 80;
            data2->players_list[0].rect.width = 30;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        data2->players_list[1].pos_x -= SPEED_PLAYER_TWO;
        sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
            sfClock_restart(data2->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
            data2->players_list[1].rect.left = 77;
            data2->players_list[1].rect.top = 77;
            data2->players_list[1].rect.height = 77;
            data2->players_list[1].rect.width = 37;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        // NORMAL PLAYER //
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
            data2->players_list[1].rect.left = 39;
            data2->players_list[1].rect.top = 77;
            data2->players_list[1].rect.height = 77;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
            data2->players_list[1].rect.left = 0;
            data2->players_list[1].rect.top = 78;
            data2->players_list[1].rect.height = 76;
            data2->players_list[1].rect.width = 40;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
    }
    else {
        if (data2->animation_number == 2)
            data2->animation_number = 3;
    }
    if (data2->players_list[0].pos_y < 885 && data2->animation_number == 3){
        data2->players_list[0].pos_y += SPEED_PLAYER_ONE;
        sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
            sfClock_restart(data2->players_list[0].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
            data2->players_list[0].rect.left = 77;
            data2->players_list[0].rect.top = 0;
            data2->players_list[0].rect.height = 77;
            data2->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
            data2->players_list[0].rect.left = 39;
            data2->players_list[0].rect.top = 0;
            data2->players_list[0].rect.height = 77;
            data2->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
            data2->players_list[0].rect.left = 0;
            data2->players_list[0].rect.top = 0;
            data2->players_list[0].rect.height = 78;
            data2->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
        }
        data2->players_list[1].pos_y += SPEED_PLAYER_TWO;
        sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
            sfClock_restart(data2->players_list[1].clock);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
            data2->players_list[1].rect.left = 77;
            data2->players_list[1].rect.top = 0;
            data2->players_list[1].rect.height = 77;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
            data2->players_list[1].rect.left = 39;
            data2->players_list[1].rect.top = 0;
            data2->players_list[1].rect.height = 77;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
        && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
            data2->players_list[1].rect.left = 0;
            data2->players_list[1].rect.top = 0;
            data2->players_list[1].rect.height = 78;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
        }
    }
    else {
        if (data2->animation_number == 3){
            data2->players_list[1].rect.left = 39;
            data2->players_list[1].rect.top = 0;
            data2->players_list[1].rect.height = 77;
            data2->players_list[1].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            data2->players_list[0].rect.left = 39;
            data2->players_list[0].rect.top = 0;
            data2->players_list[0].rect.height = 77;
            data2->players_list[0].rect.width = 38;
            sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            data2->begin_animation = OFF;
            data2->animation_number = 0;
        }
    }
}

void do_animation_bot(data2_t *data2, int w1, int h1, int l1, int t1, int w2, int h2, int l2, int t2, int w3, int h3, int l3, int t3, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[i].clock)) > 600)
        sfClock_restart(data2->bot_list[i].clock);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[i].clock)) > 400
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[i].clock)) <= 600){
        data2->bot_list[i].rect.left = l3;
        data2->bot_list[i].rect.top = t3;
        data2->bot_list[i].rect.height = h3;
        data2->bot_list[i].rect.width = w3;
        sfSprite_setTextureRect(data2->bot_list[i].sprite, data2->bot_list[i].rect);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[1].clock)) > 200
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[1].clock)) <= 400){
        data2->bot_list[i].rect.left = l2;
        data2->bot_list[i].rect.top = t2;
        data2->bot_list[i].rect.height = h2;
        data2->bot_list[i].rect.width = w2;
        sfSprite_setTextureRect(data2->bot_list[i].sprite, data2->bot_list[i].rect);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[i].clock)) > 0
    && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->bot_list[i].clock)) <= 200){
        data2->bot_list[i].rect.left = l1;
        data2->bot_list[i].rect.top = t1;
        data2->bot_list[i].rect.height = h1;
        data2->bot_list[i].rect.width = w1;
        sfSprite_setTextureRect(data2->bot_list[i].sprite, data2->bot_list[i].rect);
    }
}

int is_win(data2_t *data2)
{
    for (int i = 0; i < data2->number_of_bots; i++){
        if (data2->bot_list[i].is_infected == 1)
            return (0);
    }
    return (1);
}

int is_defeat(data2_t *data2)
{
    for (int i = 0; i < data2->number_of_bots; i++){
        if (data2->bot_list[i].is_infected == 0)
            return (0);
    }
    return (1);
}

void game_instruction(data2_t *data2)
{
    do_begin_animation(data2);
    if (is_defeat(data2)){
        data2->wave = 1;
        initialize_bots(data2);
    }
    if (is_win(data2)){
        data2->wave++;
        initialize_bots(data2);
    }
    // BOTS //
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->soin_generator)) > MILLISECOND_PER_SOIN){
        for (int i = 0; i < SOINS_LIST; i++){
            if (data2->soins_list[i].active == OFF && data2->soin_active < LIMIT_SOIN){
                data2->soins_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
                data2->soins_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
                data2->soins_list[i].active = ON;
                data2->soin_active++;
                sfSprite_setPosition(data2->soins_list[i].sprite, (sfVector2f) {data2->soins_list[i].pos_x, data2->soins_list[i].pos_y});
                sfClock_restart(data2->soin_generator);
                break;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < SOINS_LIST; j++){
            if (data2->soins_list[j].pos_x >= data2->players_list[i].pos_x && data2->soins_list[j].pos_x <= data2->players_list[i].pos_x + data2->players_list[i].rect.width
                && data2->soins_list[j].pos_y >= data2->players_list[i].pos_y && data2->soins_list[j].pos_y <= data2->players_list[i].pos_y + data2->players_list[i].rect.height ||
                data2->players_list[i].pos_x >= data2->soins_list[j].pos_x && data2->players_list[i].pos_x <= data2->soins_list[j].pos_x + 50
                && data2->players_list[i].pos_y >= data2->soins_list[j].pos_y && data2->players_list[i].pos_y <= data2->soins_list[j].pos_y + 50 && data2->soins_list[j].active == ON && data2->begin_animation == OFF){
                    data2->soin_active -= 1;
                    data2->soins_list[j].active = OFF;
                    data2->soins_list[j].pos_x = random_number(MIN_X - 1, MAX_X);
                    data2->soins_list[j].pos_y = random_number(MIN_Y - 1, MAX_Y);
                    sfSprite_setPosition(data2->players_list[i].sprite, (sfVector2f) {data2->soins_list[j].pos_x, data2->soins_list[j].pos_y});
                    data2->players_list[i].nb_soin++;
            }
        }
    }
    if (data2->begin_animation == 0){
        for (int i = 0; i < data2->number_of_bots; i++){
            if (data2->bot_list[i].change_direction < data2->bot_list[i].counter_ch_dir){
                data2->bot_list[i].counter_ch_dir = 0;
                data2->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
                data2->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
            }
            if (data2->bot_list[i].direction == DOWN && data2->bot_list[i].pos_y >= MAX_Y
            || data2->bot_list[i].direction == LEFT && data2->bot_list[i].pos_x <= MIN_X
            || data2->bot_list[i].direction == RIGHT && data2->bot_list[i].pos_x >= MAX_X
            || data2->bot_list[i].direction == UP && data2->bot_list[i].pos_y <= MIN_Y){
                data2->bot_list[i].counter_ch_dir = 0;
                data2->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
                data2->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
            }
            for (int j = i; j < data2->number_of_bots; j++){
                if (data2->bot_list[j].is_infected == 1 || data2->bot_list[i].is_infected == 1){
                    if (data2->bot_list[j].pos_x >= data2->bot_list[i].pos_x && data2->bot_list[j].pos_x <= data2->bot_list[i].pos_x + data2->bot_list[i].rect.width
                        && data2->bot_list[j].pos_y >= data2->bot_list[i].pos_y && data2->bot_list[j].pos_y <= data2->bot_list[i].pos_y + data2->bot_list[i].rect.height ||
                        data2->bot_list[i].pos_x >= data2->bot_list[j].pos_x && data2->bot_list[i].pos_x <= data2->bot_list[j].pos_x + data2->bot_list[j].rect.width
                        && data2->bot_list[i].pos_y >= data2->bot_list[j].pos_y && data2->bot_list[i].pos_y <= data2->bot_list[j].pos_y + data2->bot_list[j].rect.height){
                        data2->bot_list[j].is_infected = 1;
                        data2->bot_list[i].is_infected = 1;
                    }
                }
            }
            if (data2->bot_list[i].is_infected == 1){
                for (int j = 0; j < 2; j++){
                    if (data2->players_list[j].nb_soin > 0){
                        if (data2->players_list[j].pos_x >= data2->bot_list[i].pos_x && data2->players_list[j].pos_x <= data2->bot_list[i].pos_x + data2->bot_list[i].rect.width
                            && data2->players_list[j].pos_y >= data2->bot_list[i].pos_y && data2->players_list[j].pos_y <= data2->bot_list[i].pos_y + data2->bot_list[i].rect.height ||
                            data2->bot_list[i].pos_x >= data2->players_list[j].pos_x && data2->bot_list[i].pos_x <= data2->players_list[j].pos_x + data2->players_list[j].rect.width
                            && data2->bot_list[i].pos_y >= data2->players_list[j].pos_y && data2->bot_list[i].pos_y <= data2->players_list[j].pos_y + data2->players_list[j].rect.height){
                                data2->players_list[j].nb_soin -= 1;
                                data2->bot_list[i].is_infected = 0;
                                sfSprite_destroy(data2->bot_list[i].sprite);
                                data2->bot_list[i].sprite = sfSprite_create();
                                sfSprite_setTexture(data2->bot_list[i].sprite, data2->textures.bot, sfTrue);
                                sfSprite_setTextureRect(data2->bot_list[i].sprite, data2->bot_list[i].rect);
                                sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
                        }
                    }
                }
            }
            if (data2->bot_list[i].is_infected == 1) {
                data2->bot_list[i].speed = SPEED_BOT_INFECTED;
                sfSprite_setColor(data2->bot_list[i].sprite, sfColor_fromRGBA(255, 20, 20, 150));
            }
            if (data2->bot_list[i].direction == DOWN && data2->bot_list[i].pos_y < MAX_Y){
                data2->bot_list[i].counter_ch_dir += data2->bot_list[i].speed;
                data2->bot_list[i].pos_y += data2->bot_list[i].speed;
                sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
                if (data2->bot_list[i].id == 1)
                    do_animation_bot(data2, 33, 74, 10, 5, 34, 74, 62, 4, 35, 74, 115, 5, i);
                if (data2->bot_list[i].id == 2)
                    do_animation_bot(data2, 35, 74, 168, 5, 36, 76, 219, 4, 37, 75, 272, 5, i);
                if (data2->bot_list[i].id == 3)
                    do_animation_bot(data2, 42, 70, 323, 9, 41, 71, 376, 8, 42, 70, 430, 9, i);
                if (data2->bot_list[i].id == 4)
                    do_animation_bot(data2, 34, 74, 486, 4, 33, 75, 539, 4, 33, 74, 592, 5, i);
                if (data2->bot_list[i].id == 5)
                    do_animation_bot(data2, 37, 77, 8, 322, 38, 78, 61, 321, 38, 77, 114, 321, i);
                if (data2->bot_list[i].id == 6)
                    do_animation_bot(data2, 34, 76, 169, 322, 33, 77, 222, 321, 34, 76, 275, 322, i);
                if (data2->bot_list[i].id == 7)
                    do_animation_bot(data2, 33, 75, 328, 321, 32, 76, 381, 320, 34, 75, 433, 321, i);
                if (data2->bot_list[i].id == 8)
                    do_animation_bot(data2, 38, 76, 484, 320, 38, 77, 538, 319, 36, 77, 591, 320, i);
            }
            if (data2->bot_list[i].direction == LEFT && data2->bot_list[i].pos_x > MIN_X){
                data2->bot_list[i].counter_ch_dir += data2->bot_list[i].speed;
                data2->bot_list[i].pos_x -= data2->bot_list[i].speed;
                sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
                if (data2->bot_list[i].id == 1)
                    do_animation_bot(data2, 46, 74, 7, 85, 45, 76, 60, 83, 44, 74, 113, 85, i);
                if (data2->bot_list[i].id == 2)
                    do_animation_bot(data2, 45, 77, 167, 82, 43, 77, 220, 82, 42, 76, 273, 83, i);
                if (data2->bot_list[i].id == 3)
                    do_animation_bot(data2, 40, 72, 327, 87, 39, 73, 379, 86, 39, 72, 431, 88, i);
                if (data2->bot_list[i].id == 4)
                    do_animation_bot(data2, 45, 77, 484, 81, 43, 77, 537, 81, 42, 76, 590, 82, i);
                if (data2->bot_list[i].id == 5)
                    do_animation_bot(data2, 38, 78, 8, 400, 37, 78, 61, 400, 37, 77, 114, 400, i);
                if (data2->bot_list[i].id == 6)
                    do_animation_bot(data2, 35, 76, 168, 402, 35, 77, 220, 400, 35, 76, 273, 401, i);
                if (data2->bot_list[i].id == 7)
                    do_animation_bot(data2, 30, 76, 330, 400, 30, 77, 383, 399, 31, 76, 435, 400, i);
                if (data2->bot_list[i].id == 8)
                    do_animation_bot(data2, 36, 78, 485, 399, 36, 78, 539, 398, 36, 77, 591, 400, i);
            }
            if (data2->bot_list[i].direction == RIGHT && data2->bot_list[i].pos_x < MAX_X){
                data2->bot_list[i].counter_ch_dir += data2->bot_list[i].speed;
                data2->bot_list[i].pos_x += data2->bot_list[i].speed;
                sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
                if (data2->bot_list[i].id == 1)
                    do_animation_bot(data2, 46, 74, 3, 164, 45, 75, 56, 163, 43, 74, 110, 164, i);
                if (data2->bot_list[i].id == 2)
                    do_animation_bot(data2, 44, 77, 160, 161, 43, 77, 214, 161, 42, 75, 268, 164, i);
                if (data2->bot_list[i].id == 3)
                    do_animation_bot(data2, 39, 72, 323, 166, 39, 73, 376, 165, 39, 72, 429, 166, i);
                if (data2->bot_list[i].id == 4)
                    do_animation_bot(data2, 45, 77, 477, 160, 44, 77, 532, 161, 42, 76, 585, 162, i);
                if (data2->bot_list[i].id == 5)
                    do_animation_bot(data2, 36, 78, 10, 479, 36, 78, 62, 478, 36, 76, 115, 480, i);
                if (data2->bot_list[i].id == 6)
                    do_animation_bot(data2, 35, 75, 170, 482, 35, 76, 223, 481, 35, 75, 276, 481, i);
                if (data2->bot_list[i].id == 7)
                    do_animation_bot(data2, 30, 75, 330, 480, 30, 76, 382, 479, 30, 75, 436, 480, i);
                if (data2->bot_list[i].id == 8)
                    do_animation_bot(data2, 37, 78, 485, 477, 37, 78, 538, 477, 37, 77, 591, 478, i);
            }
            if (data2->bot_list[i].direction == UP && data2->bot_list[i].pos_y > MIN_Y){
                data2->bot_list[i].counter_ch_dir += data2->bot_list[i].speed;
                data2->bot_list[i].pos_y -= data2->bot_list[i].speed;
                sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
                if (data2->bot_list[i].id == 1)
                    do_animation_bot(data2, 34, 73, 11, 244, 34, 74, 63, 243, 34, 73, 116, 244, i);
                if (data2->bot_list[i].id == 2)
                    do_animation_bot(data2, 36, 75, 169, 242, 37, 76, 222, 241, 36, 75, 275, 242, i);
                if (data2->bot_list[i].id == 3)
                    do_animation_bot(data2, 41, 72, 323, 246, 42, 73, 377, 244, 40, 72, 430, 245, i);
                if (data2->bot_list[i].id == 4)
                    do_animation_bot(data2, 33, 75, 487, 241, 33, 76, 539, 240, 32, 75, 592, 241, i);
                if (data2->bot_list[i].id == 5)
                    do_animation_bot(data2, 39, 76, 8, 558, 39, 76, 61, 558, 38, 75, 115, 560, i);
                if (data2->bot_list[i].id == 6)
                    do_animation_bot(data2, 33, 74, 169, 560, 33, 75, 222, 560, 32, 74, 275, 560, i);
                if (data2->bot_list[i].id == 7)
                    do_animation_bot(data2, 32, 75, 328, 560, 33, 76, 381, 559, 33, 75, 433, 560, i);
                if (data2->bot_list[i].id == 8)
                    do_animation_bot(data2, 39, 77, 483, 557, 38, 77, 536, 557, 38, 76, 589, 559, i);
            }
        }
    }
    // PLAYER 1 //
    if (data2->players_list[0].animation == ON && data2->begin_animation == 0){
        if (data2->players_list[0].direction == LEFT && data2->players_list[0].pos_x > MIN_X){
            data2->players_list[0].pos_x -= SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
                sfClock_restart(data2->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
                data2->players_list[0].rect.left = 2;
                data2->players_list[0].rect.top = 78;
                data2->players_list[0].rect.height = 78;
                data2->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
                data2->players_list[0].rect.left = 43;
                data2->players_list[0].rect.top = 78;
                data2->players_list[0].rect.height = 78;
                data2->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
                data2->players_list[0].rect.left = 80;
                data2->players_list[0].rect.top = 79;
                data2->players_list[0].rect.height = 79;
                data2->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
        }
        if (data2->players_list[0].direction == RIGHT && data2->players_list[0].pos_x < MAX_X){
            data2->players_list[0].pos_x += SPEED_PLAYER_ONE;
            sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
                sfClock_restart(data2->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
                data2->players_list[0].rect.left = 77;
                data2->players_list[0].rect.top = 158;
                data2->players_list[0].rect.height = 78;
                data2->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
                data2->players_list[0].rect.left = 45;
                data2->players_list[0].rect.top = 157;
                data2->players_list[0].rect.height = 79;
                data2->players_list[0].rect.width = 29;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
                data2->players_list[0].rect.left = 6;
                data2->players_list[0].rect.top = 158;
                data2->players_list[0].rect.height = 80;
                data2->players_list[0].rect.width = 30;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
        }
        if (data2->players_list[0].direction == DOWN && data2->players_list[0].pos_y < MAX_Y){
            data2->players_list[0].pos_y += SPEED_PLAYER_ONE;
            sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
                sfClock_restart(data2->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
                data2->players_list[0].rect.left = 77;
                data2->players_list[0].rect.top = 0;
                data2->players_list[0].rect.height = 77;
                data2->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
                data2->players_list[0].rect.left = 39;
                data2->players_list[0].rect.top = 0;
                data2->players_list[0].rect.height = 77;
                data2->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
                data2->players_list[0].rect.left = 0;
                data2->players_list[0].rect.top = 0;
                data2->players_list[0].rect.height = 78;
                data2->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
        }
        if (data2->players_list[0].direction == UP && data2->players_list[0].pos_y > MIN_Y){
            data2->players_list[0].pos_y -= SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[0].sprite, (sfVector2f) {data2->players_list[0].pos_x, data2->players_list[0].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 600)
                sfClock_restart(data2->players_list[0].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 600){
                data2->players_list[0].rect.left = 78;
                data2->players_list[0].rect.top = 239;
                data2->players_list[0].rect.height = 76;
                data2->players_list[0].rect.width = 37;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 400){
                data2->players_list[0].rect.left = 38;
                data2->players_list[0].rect.top = 237;
                data2->players_list[0].rect.height = 78;
                data2->players_list[0].rect.width = 39;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[0].clock)) <= 200){
                data2->players_list[0].rect.left = 0;
                data2->players_list[0].rect.top = 238;
                data2->players_list[0].rect.height = 77;
                data2->players_list[0].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[0].sprite, data2->players_list[0].rect);
            }
        }
    }
    // PLAYER 2 //
    if (data2->players_list[1].animation == ON && data2->begin_animation == 0){
        if (data2->players_list[1].direction == LEFT && data2->players_list[1].pos_x > 42){
            data2->players_list[1].pos_x -= SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
                sfClock_restart(data2->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
                data2->players_list[1].rect.left = 77;
                data2->players_list[1].rect.top = 77;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 37;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
                data2->players_list[1].rect.left = 39;
                data2->players_list[1].rect.top = 77;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
                data2->players_list[1].rect.left = 0;
                data2->players_list[1].rect.top = 78;
                data2->players_list[1].rect.height = 76;
                data2->players_list[1].rect.width = 40;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
        }
        if (data2->players_list[1].direction == RIGHT && data2->players_list[1].pos_x < 1838){
            data2->players_list[1].pos_x += SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
                sfClock_restart(data2->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
                data2->players_list[1].rect.left = 78;
                data2->players_list[1].rect.top = 155;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 36;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            // NORMAL PLAYER //
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
                data2->players_list[1].rect.left = 39;
                data2->players_list[1].rect.top = 154;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
                data2->players_list[1].rect.left = 1;
                data2->players_list[1].rect.top = 155;
                data2->players_list[1].rect.height = 76;
                data2->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
        }
        if (data2->players_list[1].direction == DOWN && data2->players_list[1].pos_y < 958){
            data2->players_list[1].pos_y += SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
                sfClock_restart(data2->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
                data2->players_list[1].rect.left = 77;
                data2->players_list[1].rect.top = 0;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
                data2->players_list[1].rect.left = 39;
                data2->players_list[1].rect.top = 0;
                data2->players_list[1].rect.height = 77;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
                data2->players_list[1].rect.left = 0;
                data2->players_list[1].rect.top = 0;
                data2->players_list[1].rect.height = 78;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
        }
        // UP //
        if (data2->players_list[1].direction == UP && data2->players_list[1].pos_y > 128){
            data2->players_list[1].pos_y -= SPEED_PLAYER_TWO;
            sfSprite_setPosition(data2->players_list[1].sprite, (sfVector2f) {data2->players_list[1].pos_x, data2->players_list[1].pos_y});
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 600)
                sfClock_restart(data2->players_list[1].clock);
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 400
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 600){
                data2->players_list[1].rect.left = 0;
                data2->players_list[1].rect.top = 232;
                data2->players_list[1].rect.height = 75;
                data2->players_list[1].rect.width = 39;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 200
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 400){
                data2->players_list[1].rect.left = 39;
                data2->players_list[1].rect.top = 231;
                data2->players_list[1].rect.height = 76;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) > 0
            && sfTime_asMilliseconds(sfClock_getElapsedTime(data2->players_list[1].clock)) <= 200){
                data2->players_list[1].rect.left = 77;
                data2->players_list[1].rect.top = 232;
                data2->players_list[1].rect.height = 75;
                data2->players_list[1].rect.width = 38;
                sfSprite_setTextureRect(data2->players_list[1].sprite, data2->players_list[1].rect);
            }
        }
    }
}

void game_loop(data2_t *data2)
{
    sfSound_play(data2->sound.horror);
    sfSound_setLoop(data2->sound.horror, sfTrue);
    while (sfRenderWindow_isOpen(data2->window)){
        events_handling(data2);
        game_instruction(data2);
        display_game(data2);
    }
}

int main(int ac, char **av)
{
    data2_t data2;

    srand(time(NULL));
    data2.wave = 1;
    initialize_data2(&data2);
    game_loop(&data2);
    return (0);
}
