/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef CHAUFFE_SOURIS_H_
#define CHAUFFE_SOURIS_H_

#include "structure.h"

void init_chauffe_souris_sp_t(d_t *d);
void animation_left(d_t *d);
void animation_left_dir(chauffe_souris_t *chauffe_souris);
void animation_right_dir(chauffe_souris_t *chauffe_souris);
void animation_chauffe_souris(d_t *d);
void init_chauffe_souris_pos(d_t *d);
void move_chauffe_souris(d_t *d);
void collision(d_t *d);
void init_bat_die(d_t *d);
void bat_die(d_t *d);
void last_scene(d_t *d);
void init_last_scene(d_t *d);

#endif
