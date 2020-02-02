/*
** EPITECH PROJECT, 2019
**  Coronavirus
** File description:
** display sprite
*/

#include "structure.h"
#include "map_grotte.h"
#include "macro.h"

void init_direction(d_t *d)
{
    int nbr = 0;
    const int MAX = 6;
    const int MIN = 1;

    for (int i = 0; i < d->nbr_chf_souris; i++) {
        nbr = rand() % (MAX - MIN) + MIN;
        if (nbr == 1) {
            CHF_SOURIS[i].dir_x = 4;
            CHF_SOURIS[i].dir_y = 2;
        }
        if (nbr == 2) {
            CHF_SOURIS[i].dir_x = 3;
            CHF_SOURIS[i].dir_y = 3;
        }
        if (nbr == 3) {
            CHF_SOURIS[i].dir_x = 2;
            CHF_SOURIS[i].dir_y = 4;
        }
        if (nbr == 4) {
            CHF_SOURIS[i].dir_x = 5;
            CHF_SOURIS[i].dir_y = 1;
        }
        if (nbr == 5) {
            CHF_SOURIS[i].dir_x = 1;
            CHF_SOURIS[i].dir_y = 5;
        }
        if (nbr == 6) {
            CHF_SOURIS[i].dir_x = 2;
            CHF_SOURIS[i].dir_y = 4;
        }
    }
}

void init_chauffe_souris_pos(d_t *d)
{
    init_direction(d);
    //HAU
    CHF_SOURIS[0].pos.x = 10;
    CHF_SOURIS[0].pos.y = 50;
    CHF_SOURIS[1].pos.x = 250;
    CHF_SOURIS[1].pos.y = 10;
    CHF_SOURIS[2].pos.x = 726;
    CHF_SOURIS[2].pos.y = 20;
    CHF_SOURIS[3].pos.x = 1093;
    CHF_SOURIS[3].pos.y = 10;
    CHF_SOURIS[4].pos.x = 1605;
    CHF_SOURIS[4].pos.y = 10;
    CHF_SOURIS[5].pos.x = 1750;
    CHF_SOURIS[5].pos.y = 10;
    CHF_SOURIS[6].pos.x = 1890;
    CHF_SOURIS[6].pos.y = 182;
    CHF_SOURIS[7].pos.x = 19;
    CHF_SOURIS[7].pos.y = 617;
    CHF_SOURIS[8].pos.x = 1890;
    CHF_SOURIS[8].pos.y = 350;
    CHF_SOURIS[9].pos.x = 5;
    CHF_SOURIS[9].pos.y = 650;
    CHF_SOURIS[10].pos.x = 250;
    CHF_SOURIS[10].pos.y = 650;
    CHF_SOURIS[11].pos.x = 726;
    CHF_SOURIS[11].pos.y = 450;
    CHF_SOURIS[12].pos.x = 1093;
    CHF_SOURIS[12].pos.y = 850;
    CHF_SOURIS[13].pos.x = 1605;
    CHF_SOURIS[13].pos.y = 950;
    CHF_SOURIS[14].pos.x = 1850;
    CHF_SOURIS[14].pos.y = 950;
    CHF_SOURIS[15].pos.x = 5;
    CHF_SOURIS[15].pos.y = 200;
    CHF_SOURIS[16].pos.x = 5;
    CHF_SOURIS[16].pos.y = 800;
    CHF_SOURIS[17].pos.x = 36;
    CHF_SOURIS[17].pos.y = 947;

    for (int i = 0; i < 18; i++)
        sfSprite_setPosition(CHF_SOURIS[3].sprite, (sfVector2f){CHF_SOURIS[i].pos.x, CHF_SOURIS[i].pos.y});
}