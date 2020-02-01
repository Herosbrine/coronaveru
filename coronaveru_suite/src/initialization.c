/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** initialization.c
*/

#include "game.h"
#include "my.h"
#include <stdlib.h>

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode, "CORONAVIRUS",
    sfFullscreen | sfClose, NULL);
    sfRenderWindow_setKeyRepeatEnabled(window, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void initialize_sounds(data_t *data)
{
    data->sound_buffer.horror = sfSoundBuffer_createFromFile("sound/horrreur.ogg");
    data->sound.horror = sfSound_create();
    sfSound_setBuffer(data->sound.horror, data->sound_buffer.horror);
}

void initialize_data(data_t *data)
{
    data->wave = 1;
    data->sound_active = ON;
    data->animation_number = 1;
    data->begin_animation = ON;
    data->font = sfFont_createFromFile("style/font.ttf");
    data->window = create_window();
    data->s_map = sfSprite_create();
    data->textures.map = sfTexture_createFromFile("img/map.png", NULL);
    sfSprite_setTexture(data->s_map, data->textures.map, sfTrue);
    initialize_players(data);
    initialize_bots(data);
    initialize_soins(data);
    initialize_sounds(data);
    initialize_text(data);
    initialize_exit(data);
}

void initialize_text(data_t *data)
{
    wave_message(data);
    wave_message_int(data);
    player_antidote_1_msg(data);
    player_antidote_2_msg(data);
    player_antidote_1_int(data);
    player_antidote_2_int(data);
}

void wave_message(data_t *data)
{
    data->text.wave_txt = sfText_create();
    sfText_setFont(data->text.wave_txt, data->font);
    sfText_setString(data->text.wave_txt, "WAVE :");
    sfText_setColor(data->text.wave_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.wave_txt, 70);
    sfText_setPosition(data->text.wave_txt, (sfVector2f) {25, -5});
}

void wave_message_int(data_t *data)
{
    data->text.wave_int = sfText_create();
    sfText_setFont(data->text.wave_int, data->font);
    sfText_setString(data->text.wave_int, my_int_to_char(data->wave));
    sfText_setColor(data->text.wave_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.wave_int, 70);
    sfText_setPosition(data->text.wave_int, (sfVector2f) {210, -5});
}

void player_antidote_1_msg(data_t *data)
{
    data->text.antidote1_txt = sfText_create();
    sfText_setFont(data->text.antidote1_txt, data->font);
    sfText_setString(data->text.antidote1_txt, "ANTIDOTE :");
    sfText_setColor(data->text.antidote1_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.antidote1_txt, 70);
    sfText_setPosition(data->text.antidote1_txt, (sfVector2f) {510, -5});
}

void player_antidote_1_int(data_t *data)
{
    data->text.antidote1_int = sfText_create();
    sfText_setFont(data->text.antidote1_int, data->font);
    sfText_setString(data->text.antidote1_int, my_int_to_char(data->players_list[0].nb_soin));
    sfText_setColor(data->text.antidote1_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.antidote1_int, 70);
    sfText_setPosition(data->text.antidote1_int, (sfVector2f) {775, -5});
}

void player_antidote_2_msg(data_t *data)
{
    data->text.antidote2_txt = sfText_create();
    sfText_setFont(data->text.antidote2_txt, data->font);
    sfText_setString(data->text.antidote2_txt, "ANTIDOTE :");
    sfText_setColor(data->text.antidote2_txt, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.antidote2_txt, 70);
    sfText_setPosition(data->text.antidote2_txt, (sfVector2f) {1010, -5});
}

void player_antidote_2_int(data_t *data)
{
    data->text.antidote2_int = sfText_create();
    sfText_setFont(data->text.antidote2_int, data->font);
    sfText_setString(data->text.antidote2_int, my_int_to_char(data->players_list[1].nb_soin));
    sfText_setColor(data->text.antidote2_int, sfColor_fromRGBA(239, 216, 7, 120));
    sfText_setCharacterSize(data->text.antidote2_int, 70);
    sfText_setPosition(data->text.antidote2_int, (sfVector2f) {1275, -5});
}

int random_number(int nb1, int nb2)
{
    int a = 0;

    a = rand() % (nb2 - nb1) + 1 + nb1;
    return (a);
}

void initialize_bot_id(data_t *data, int w1, int h1, int l1, int t1, int w2, int h2, int l2, int t2, int w3, int h3, int l3, int t3, int w4, int h4, int l4, int t4, int i)
{
    if (data->bot_list[i].direction == DOWN){
        data->bot_list[i].rect.left = l1;
        data->bot_list[i].rect.top = t1;
        data->bot_list[i].rect.height = h1;
        data->bot_list[i].rect.width = w1;
    }
    if (data->bot_list[i].direction == LEFT){
        data->bot_list[i].rect.left = l2;
        data->bot_list[i].rect.top = t2;
        data->bot_list[i].rect.height = h2;
        data->bot_list[i].rect.width = w2;
    }
    if (data->bot_list[i].direction == RIGHT){
        data->bot_list[i].rect.left = l3;
        data->bot_list[i].rect.top = t3;
        data->bot_list[i].rect.height = h3;
        data->bot_list[i].rect.width = w3;
    }
    if (data->bot_list[i].direction == UP){
        data->bot_list[i].rect.left = l4;
        data->bot_list[i].rect.top = t4;
        data->bot_list[i].rect.height = h4;
        data->bot_list[i].rect.width = w4;
    }
}

void initialize_soins(data_t *data)
{
    data->soin_active = 0;
    data->soin_generator = sfClock_create();
    data->soins_list = malloc(sizeof(data->soins) * SOINS_LIST);
    data->textures.soin = sfTexture_createFromFile("img/soin.png", NULL);
    for (int i = 0; i < SOINS_LIST; i++){
        data->soins_list[i].active = OFF;
        data->soins_list[i].sprite = sfSprite_create();
        sfSprite_setTexture(data->soins_list[i].sprite, data->textures.soin, sfTrue);
        data->soins_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
        data->soins_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
    }
}

void initialize_bots(data_t *data)
{
    data->number_of_bots = NUMBER_OF_BOTS;
    data->bot_list = malloc(sizeof(data->bot) * data->number_of_bots);
    data->textures.bot = sfTexture_createFromFile("img/women_bot.png", NULL);
    for (int i = 0; i < data->number_of_bots; i++){
        data->bot_list[i].sprite = sfSprite_create();
        data->bot_list[i].clock = sfClock_create();
        data->bot_list[i].is_infected = 0;
        data->bot_list[i].id = random_number(0, NUMBER_OF_ID);
        data->bot_list[i].direction = random_number(0, NUMBER_OF_DIRECTION);
        data->bot_list[i].pos_x = random_number(MIN_X - 1, MAX_X);
        data->bot_list[i].pos_y = random_number(MIN_Y - 1, MAX_Y);
        data->bot_list[i].speed = random_number(SPEED_BOT_MIN, SPEED_BOT_MAX);
        data->bot_list[i].change_direction = random_number(MIN_CH_DIR, MAX_CH_DIR);
        sfSprite_setTexture(data->bot_list[i].sprite, data->textures.bot, sfTrue);
        if (data->bot_list[i].id == 1)
            initialize_bot_id(data, 34, 74, 62, 4, 45, 76, 60, 83, 45, 75, 56, 163, 34, 74, 63, 243, i);
        if (data->bot_list[i].id == 2)
            initialize_bot_id(data, 36, 76, 219, 4, 43, 77, 220, 82, 43, 77, 214, 161, 37, 76, 222, 241, i);
        if (data->bot_list[i].id == 3)
            initialize_bot_id(data, 41, 71, 376, 8, 39, 73, 379, 86, 39, 73, 376, 165, 42, 73, 377, 244, i);
        if (data->bot_list[i].id == 4)
            initialize_bot_id(data, 33, 75, 539, 4, 43, 77, 537, 81, 44, 77, 532, 161, 33, 76, 539, 240, i);
        if (data->bot_list[i].id == 5)
            initialize_bot_id(data, 38, 78, 61, 321, 37, 78, 61, 400, 36, 78, 62, 478, 39, 76, 61, 558, i);
        if (data->bot_list[i].id == 6)
            initialize_bot_id(data, 33, 77, 222, 321, 35, 77, 220, 400, 35, 76, 223, 481, 33, 75, 222, 560, i);
        if (data->bot_list[i].id == 7)
            initialize_bot_id(data, 32, 76, 381, 320, 30, 77, 383, 399, 30, 76, 382, 479, 33, 76, 381, 559, i);
        if (data->bot_list[i].id == 8)
            initialize_bot_id(data, 38, 77, 538, 319, 36, 78, 539, 398, 37, 78, 538, 477, 38, 77, 536, 557, i);
        if (i < BOTS_INFECTED)
            data->bot_list[i].is_infected = 1;
        sfSprite_setPosition(data->bot_list[i].sprite, (sfVector2f) {data->bot_list[i].pos_x, data->bot_list[i].pos_y});
        sfSprite_setTextureRect(data->bot_list[i].sprite, data->bot_list[i].rect);
     }
}

void initialize_exit(data_t *data)
{
    data->textures.exit = sfTexture_createFromFile("img/exit_game.png", NULL);
    data->exit_sprite = sfSprite_create();
    sfSprite_setTexture(data->exit_sprite, data->textures.exit, sfTrue);
    sfSprite_setPosition(data->exit_sprite, (sfVector2f) {1857, 10});
}

void initialize_players(data_t *data)
{
    data->players_list = malloc(sizeof(data->players) * 2);
    data->textures.player_one = sfTexture_createFromFile("img/player_one.png", NULL);
    data->textures.player_two = sfTexture_createFromFile("img/player_two.png", NULL);
    for (int i = 0; i < 2; i++){
       data->players_list[i].nb_soin = 0;
       data->players_list[i].sprite = sfSprite_create();
       data->players_list[i].direction = DOWN;
       data->players_list[i].clock = sfClock_create();
    }
    sfSprite_setTexture(data->players_list[0].sprite, data->textures.player_one, sfTrue);
    data->players_list[0].pos_x = 980;
    data->players_list[0].pos_y = 1100;

    sfSprite_setTexture(data->players_list[1].sprite, data->textures.player_two, sfTrue);
    data->players_list[1].pos_x = 905;
    data->players_list[1].pos_y = 1100;

    for (int i = 0; i < 2; i++){
        data->players_list[i].rect.left = 0;
        data->players_list[i].rect.top = 0;
        data->players_list[i].rect.height = 78;
        data->players_list[i].rect.width = 38;
        sfSprite_setPosition(data->players_list[i].sprite, (sfVector2f) {data->players_list[i].pos_x, data->players_list[i].pos_y});
        sfSprite_setTextureRect(data->players_list[i].sprite, data->players_list[i].rect);
    }
}
