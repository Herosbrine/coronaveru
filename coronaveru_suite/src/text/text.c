/*
** EPITECH PROJECT, 2019
** My defender
** File description:
** text.c
*/

#include "game.h"
#include "my.h"

void text_update(text_t text, player_t player)
{
    sfText_setString(text.money, my_int_to_char(player.money));
    sfText_setString(text.score, my_int_to_char(player.score));
    sfText_setString(text.level, my_int_to_char(player.level));
    sfText_setString(text.life, my_int_to_char(player.life));
}
