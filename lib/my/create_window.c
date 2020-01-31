/*
** EPITECH PROJECT, 2019
** create_window
** File description:
** create a window
*/

#include "../../header/structure.h"

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 1920;
    video_mode.height = 1080;
    video_mode.bitsPerPixel = 64;
    window = sfRenderWindow_create(video_mode,
    "CORONAVERU", sfDefaultStyle, NULL);
    return (window);
}