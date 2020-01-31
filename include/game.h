/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef GAME_H_
#define GAME_H_

#include "structure.h"

sfRenderWindow *create_window(void);
void init_variables(data_t *data);
void event_gestion(data_t *data);

#endif