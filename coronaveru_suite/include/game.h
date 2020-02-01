/*
** EPITECH PROJECT, 2019
** game
** File description:
** game.h
*/

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct data_s
{
    sfRenderWindow *window;
    sfFont *font;
    sfEvent event;
    sfSprite *s_map;
    sfTexture *t_map;
}data_t;

/* INITIALIZE GAME */
sfRenderWindow *create_window(void);
void initialize_data(data_t *data);

#endif /* GAME_H_ */

