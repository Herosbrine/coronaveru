/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** initialization.c
*/

#include "game.h"
#include "my.h"
#include <stdlib.h>

sfRenderWindow *create_window2(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode, "CORONAVIRUS",
    sfFullscreen | sfClose, NULL);
    sfRenderWindow_setKeyRepeatEnabled(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void initialize_sounds(data2_t *data2)
{
    data2->sound_buffer.horror = sfSoundBuffer_createFromFile("sound/horrreur.ogg");
    data2->sound.horror = sfSound_create();
    sfSound_setBuffer(data2->sound.horror, data2->sound_buffer.horror);
}

void initialize_data2(data2_t *data2)
{
    data2->sound_active = ON;
    data2->animation_number = 1;
    data2->begin_animation = ON;
    data2->font = sfFont_createFromFile("style/font.ttf");
    data2->window = create_window2();
    data2->s_map = sfSprite_create();
    data2->textures.map = sfTexture_createFromFile("img/map.png", NULL);
    sfSprite_setTexture(data2->s_map, data2->textures.map, sfTrue);
    initialize_players(data2);
    initialize_bots(data2);
    initialize_soins(data2);
    initialize_sounds(data2);
    initialize_text(data2);
    initialize_exit(data2);
    initialize_sound(data2);
}

void initialize_text(data2_t *data2)
{
    wave_message(data2);
    wave_message_int(data2);
    player_antidote_1_msg(data2);
    player_antidote_2_msg(data2);
    player_antidote_1_int(data2);
    player_antidote_2_int(data2);
}

void wave_message(data2_t *data2)
{
    data2->text.wave_txt = sfText_create();
    sfText_setFont(data2->text.wave_txt, data2->font);
    sfText_setString(data2->text.wave_txt, "WAVE :");
    sfText_setColor(data2->text.wave_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.wave_txt, 70);
    sfText_setPosition(data2->text.wave_txt, (sfVector2f) {25, -5});
}

void wave_message_int(data2_t *data2)
{
    data2->text.wave_int = sfText_create();
    sfText_setFont(data2->text.wave_int, data2->font);
    sfText_setString(data2->text.wave_int, my_int_to_char(data2->wave));
    sfText_setColor(data2->text.wave_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.wave_int, 70);
    sfText_setPosition(data2->text.wave_int, (sfVector2f) {210, -5});
}

void player_antidote_1_msg(data2_t *data2)
{
    data2->text.antidote1_txt = sfText_create();
    sfText_setFont(data2->text.antidote1_txt, data2->font);
    sfText_setString(data2->text.antidote1_txt, "ANTIDOTE :");
    sfText_setColor(data2->text.antidote1_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.antidote1_txt, 70);
    sfText_setPosition(data2->text.antidote1_txt, (sfVector2f) {510, -5});
}

void player_antidote_1_int(data2_t *data2)
{
    data2->text.antidote1_int = sfText_create();
    sfText_setFont(data2->text.antidote1_int, data2->font);
    sfText_setString(data2->text.antidote1_int, my_int_to_char(data2->players_list[0].nb_soin));
    sfText_setColor(data2->text.antidote1_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.antidote1_int, 70);
    sfText_setPosition(data2->text.antidote1_int, (sfVector2f) {775, -5});
}

void player_antidote_2_msg(data2_t *data2)
{
    data2->text.antidote2_txt = sfText_create();
    sfText_setFont(data2->text.antidote2_txt, data2->font);
    sfText_setString(data2->text.antidote2_txt, "ANTIDOTE :");
    sfText_setColor(data2->text.antidote2_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.antidote2_txt, 70);
    sfText_setPosition(data2->text.antidote2_txt, (sfVector2f) {1010, -5});
}

void player_antidote_2_int(data2_t *data2)
{
    data2->text.antidote2_int = sfText_create();
    sfText_setFont(data2->text.antidote2_int, data2->font);
    sfText_setString(data2->text.antidote2_int, my_int_to_char(data2->players_list[1].nb_soin));
    sfText_setColor(data2->text.antidote2_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data2->text.antidote2_int, 70);
    sfText_setPosition(data2->text.antidote2_int, (sfVector2f) {1275, -5});
}

int random_number(int nb1, int nb2)
{
    int a = 0;

    a = rand() % (nb2 - nb1) + 1 + nb1;
    return (a);
}

void initialize_bot_id(data2_t *data2, int w1, int h1, int l1, int t1, int w2, int h2, int l2, int t2, int w3, int h3, int l3, int t3, int w4, int h4, int l4, int t4, int i)
{
    if (data2->bot_list[i].direction == DOWN){
        data2->bot_list[i].rect.left = l1;
        data2->bot_list[i].rect.top = t1;
        data2->bot_list[i].rect.height = h1;
        data2->bot_list[i].rect.width = w1;
    }
    if (data2->bot_list[i].direction == LEFT){
        data2->bot_list[i].rect.left = l2;
        data2->bot_list[i].rect.top = t2;
        data2->bot_list[i].rect.height = h2;
        data2->bot_list[i].rect.width = w2;
    }
    if (data2->bot_list[i].direction == RIGHT){
        data2->bot_list[i].rect.left = l3;
        data2->bot_list[i].rect.top = t3;
        data2->bot_list[i].rect.height = h3;
        data2->bot_list[i].rect.width = w3;
    }
    if (data2->bot_list[i].direction == UP){
        data2->bot_list[i].rect.left = l4;
        data2->bot_list[i].rect.top = t4;
        data2->bot_list[i].rect.height = h4;
        data2->bot_list[i].rect.width = w4;
    }
}

void initialize_soins(data2_t *data2)
{
    data2->soin_active = 0;
    data2->soin_generator = sfClock_create();
    data2->soins_list = malloc(sizeof(data2->soins) * SOINS_LIST);
    data2->textures.soin = sfTexture_createFromFile("img/soin.png", NULL);
    for (int i = 0; i < SOINS_LIST; i++){
        data2->soins_list[i].active = OFF;
        data2->soins_list[i].sprite = sfSprite_create();
        sfSprite_setTexture(data2->soins_list[i].sprite, data2->textures.soin, sfTrue);
        data2->soins_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
        data2->soins_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
    }
}

void initialize_bots(data2_t *data2)
{
    if (data2->wave == 1){
        data2->players_list[0].nb_soin = 0;
        data2->players_list[1].nb_soin = 0;
        data2->number_of_bots = NUMBER_OF_BOTS;
        data2->number_of_bots_infected = BOTS_INFECTED;
        data2->textures.bot = sfTexture_createFromFile("img/women_bot.png", NULL);
    }
    else {
        data2->players_list[0].nb_soin = 0;
        data2->players_list[1].nb_soin = 0;
        free(data2->bot_list);
        if (data2->wave % 3 == 0){
            data2->number_of_bots -= 1;
            data2->number_of_bots_infected += 1;
        }
        data2->number_of_bots += 1;
    }
    data2->bot_list = malloc(sizeof(data2->bot) * data2->number_of_bots);
    for (int i = 0; i < data2->number_of_bots; i++){
        data2->bot_list[i].sprite = sfSprite_create();
        data2->bot_list[i].clock = sfClock_create();
        data2->bot_list[i].is_infected = 0;
        data2->bot_list[i].id = random_number(0, NUMBER_OF_ID);
        data2->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
        data2->bot_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
        data2->bot_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
        data2->bot_list[i].speed = random_number(SPEED_BOT_MIN, SPEED_BOT_MAX);
        data2->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
        sfSprite_setTexture(data2->bot_list[i].sprite, data2->textures.bot, sfTrue);
        if (data2->bot_list[i].id == 1)
            initialize_bot_id(data2, 34, 74, 62, 4, 45, 76, 60, 83, 45, 75, 56, 163, 34, 74, 63, 243, i);
        if (data2->bot_list[i].id == 2)
            initialize_bot_id(data2, 36, 76, 219, 4, 43, 77, 220, 82, 43, 77, 214, 161, 37, 76, 222, 241, i);
        if (data2->bot_list[i].id == 3)
            initialize_bot_id(data2, 41, 71, 376, 8, 39, 73, 379, 86, 39, 73, 376, 165, 42, 73, 377, 244, i);
        if (data2->bot_list[i].id == 4)
            initialize_bot_id(data2, 33, 75, 539, 4, 43, 77, 537, 81, 44, 77, 532, 161, 33, 76, 539, 240, i);
        if (data2->bot_list[i].id == 5)
            initialize_bot_id(data2, 38, 78, 61, 321, 37, 78, 61, 400, 36, 78, 62, 478, 39, 76, 61, 558, i);
        if (data2->bot_list[i].id == 6)
            initialize_bot_id(data2, 33, 77, 222, 321, 35, 77, 220, 400, 35, 76, 223, 481, 33, 75, 222, 560, i);
        if (data2->bot_list[i].id == 7)
            initialize_bot_id(data2, 32, 76, 381, 320, 30, 77, 383, 399, 30, 76, 382, 479, 33, 76, 381, 559, i);
        if (data2->bot_list[i].id == 8)
            initialize_bot_id(data2, 38, 77, 538, 319, 36, 78, 539, 398, 37, 78, 538, 477, 38, 77, 536, 557, i);
        if (i < data2->number_of_bots_infected)
            data2->bot_list[i].is_infected = 1;
        sfSprite_setPosition(data2->bot_list[i].sprite, (sfVector2f) {data2->bot_list[i].pos_x, data2->bot_list[i].pos_y});
        sfSprite_setTextureRect(data2->bot_list[i].sprite, data2->bot_list[i].rect);
     }
}

void initialize_exit(data2_t *data2)
{
    data2->textures.exit = sfTexture_createFromFile("img/exit_game.png", NULL);
    data2->exit_sprite = sfSprite_create();
    sfSprite_setTexture(data2->exit_sprite, data2->textures.exit, sfTrue);
    sfSprite_setPosition(data2->exit_sprite, (sfVector2f) {1857, 10});
}

void initialize_sound(data2_t *data2)
{
    data2->textures.sound = sfTexture_createFromFile("img/sounds.png", NULL);
    data2->sound_sprite = sfSprite_create();
    sfSprite_setTexture(data2->sound_sprite, data2->textures.sound, sfTrue);
    data2->sound_rect.left = 0;
    data2->sound_rect.top = 0;
    data2->sound_rect.width = 57;
    data2->sound_rect.height = 59;
    sfSprite_setTextureRect(data2->sound_sprite, data2->sound_rect);
    sfSprite_setPosition(data2->sound_sprite, (sfVector2f) {1768, 10});
}

void initialize_players(data2_t *data2)
{
    data2->players_list = malloc(sizeof(data2->players) * 2);
    data2->textures.player_one = sfTexture_createFromFile("img/player_one.png", NULL);
    data2->textures.player_two = sfTexture_createFromFile("img/player_two.png", NULL);
    for (int i = 0; i < 2; i++){
       data2->players_list[i].nb_soin = 0;
       data2->players_list[i].sprite = sfSprite_create();
       data2->players_list[i].direction = DOWN;
       data2->players_list[i].clock = sfClock_create();
    }
    sfSprite_setTexture(data2->players_list[0].sprite, data2->textures.player_one, sfTrue);
    data2->players_list[0].pos_x = 980;
    data2->players_list[0].pos_y = 1100;

    sfSprite_setTexture(data2->players_list[1].sprite, data2->textures.player_two, sfTrue);
    data2->players_list[1].pos_x = 905;
    data2->players_list[1].pos_y = 1100;

    for (int i = 0; i < 2; i++){
        data2->players_list[i].rect.left = 0;
        data2->players_list[i].rect.top = 0;
        data2->players_list[i].rect.height = 78;
        data2->players_list[i].rect.width = 38;
        sfSprite_setPosition(data2->players_list[i].sprite, (sfVector2f) {data2->players_list[i].pos_x, data2->players_list[i].pos_y});
        sfSprite_setTextureRect(data2->players_list[i].sprite, data2->players_list[i].rect);
    }
}
