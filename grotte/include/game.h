/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef GAME_H_
#define GAME_H_

#include "structure.h"

void init_variables(d_t *d);
void event_gestion(d_t *d);
void display_sprite(d_t *d);
void init_grotte_layer(d_t *d);
void game_instruction(d_t *d);
void init_scope(d_t *d);
void intro(d_t *d);
sfRenderWindow *create_window(void);
void initialize_text1(data_t *data);
void initialize_data(data_t *data);
void initialize_text2(data_t *data);
void initialize_text3(data_t *data);
void initialize_text4(data_t *data);

#endif
