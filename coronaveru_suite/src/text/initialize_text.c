/*
** EPITECH PROJECT, 2019
** draw text
** File description:
** draw_text.c
*/

#include "game.h"
#include "my.h"

void initialize_text(data_t *data)
{
    wave_message(data);
    player_antidote_1_msg(data);
    player_antidote_2_msg(data);
}

void wave_message(data_t *data)
{
    data->text.wave_txt = sfText_create();
    sfText_setFont(data->text.wave_txt, data->font);
    sfText_setString(data->text.wave_txt, "WAVE");
    sfText_setColor(data->text.wave_txt, sfRed);
    sfText_setCharacterSize(data->text.wave_txt, 70);
    sfText_setPosition(data->text.wave_txt, (sfVector2f) {70, 70});
}

void player_antidote_1_msg(data_t *data)
{
    data->text.antidote1_txt = sfText_create();
    sfText_setFont(data->text.antidote1_txt, data->font);
    sfText_setString(data->text.antidote1_txt, "ANTIDOTE P1 :");
    sfText_setColor(data->text.antidote1_txt, sfRed);
    sfText_setCharacterSize(data->text.antidote1_txt, 70);
    sfText_setPosition(data->text.antidote1_txt, (sfVector2f) {70, 300});
}

void player_antidote_2_msg(data_t *data)
{
    data->text.antidote2_txt = sfText_create();
    sfText_setFont(data->text.antidote2_txt, data->font);
    sfText_setString(data->text.antidote2_txt, "ANTIDOTE P2 :");
    sfText_setColor(data->text.antidote2_txt, sfRed);
    sfText_setCharacterSize(data->text.antidote2_txt, 70);
    sfText_setPosition(data->text.antidote2_txt, (sfVector2f) {70, 600});
}
