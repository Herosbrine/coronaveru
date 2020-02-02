/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef CHAUFFE_SOURIS_H_
#define CHAUFFE_SOURIS_H_

#include "structure.h"

void init_chauffe_souris_sp_t(data_t *data);
void animation_left(data_t *data);
void animation_left_dir(chauffe_souris_t *chauffe_souris);
void animation_right_dir(chauffe_souris_t *chauffe_souris);
void animation_chauffe_souris(data_t *data);
void init_chauffe_souris_pos(data_t *data);
void move_chauffe_souris(data_t *data);
void collision(data_t *data);
void init_bat_die(data_t *data);
void bat_die(data_t *data);
void last_scene(data_t *data);
void init_last_scene(data_t *data);

#endif
