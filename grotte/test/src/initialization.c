/*
** EPITECH PROJECT, 2019
** CORONAVIRUS
** File description:
** initialization.c
*/

#include "game.h"
#include "structure.h"
#include <stdlib.h>

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode, "CORONAVIRUS",
    sfFullscreen, NULL);
    sfRenderWindow_setKeyRepeatEnabled(window, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void initialize_data(data_t *data)
{
    data->window = create_window();
    initialize_text1(data);
    initialize_text2(data);
    initialize_text3(data);
    initialize_text4(data);
}

void initialize_text1(data_t *data)
{
    data->textures.ttext1a = sfTexture_createFromFile("test/text/text1/text1_opacity_20.png", NULL);
    data->textures.ttext1b = sfTexture_createFromFile("test/text/text1/text1_opacity_40.png", NULL);
    data->textures.ttext1c = sfTexture_createFromFile("test/text/text1/text1_opacity_60.png", NULL);
    data->textures.ttext1d = sfTexture_createFromFile("test/text/text1/text1_opacity_80.png", NULL);
    data->textures.ttext1e = sfTexture_createFromFile("test/text/text1/text1_opacity_100.png", NULL);
    data->text1.stext1a = sfSprite_create();
    data->text1.stext1b = sfSprite_create();
    data->text1.stext1c = sfSprite_create();
    data->text1.stext1d = sfSprite_create();
    data->text1.stext1e = sfSprite_create();
    sfSprite_setTexture(data->text1.stext1a, data->textures.ttext1a, 0);
    sfSprite_setTexture(data->text1.stext1b, data->textures.ttext1b, 0);
    sfSprite_setTexture(data->text1.stext1c, data->textures.ttext1c, 0);
    sfSprite_setTexture(data->text1.stext1d, data->textures.ttext1d, 0);
    sfSprite_setTexture(data->text1.stext1e, data->textures.ttext1e, 0);
}

void initialize_text2(data_t *data)
{
    data->textures.ttext2a = sfTexture_createFromFile("test/text/text2/text2_opacity_20.png", NULL);
    data->textures.ttext2b = sfTexture_createFromFile("test/text/text2/text2_opacity_40.png", NULL);
    data->textures.ttext2c = sfTexture_createFromFile("test/text/text2/text2_opacity_60.png", NULL);
    data->textures.ttext2d = sfTexture_createFromFile("test/text/text2/text2_opacity_80.png", NULL);
    data->textures.ttext2e = sfTexture_createFromFile("test/text/text2/text2_opacity_100.png", NULL);
    data->text2.stext2a = sfSprite_create();
    data->text2.stext2b = sfSprite_create();
    data->text2.stext2c = sfSprite_create();
    data->text2.stext2d = sfSprite_create();
    data->text2.stext2e = sfSprite_create();
    sfSprite_setTexture(data->text2.stext2a, data->textures.ttext2a, 0);
    sfSprite_setTexture(data->text2.stext2b, data->textures.ttext2b, 0);
    sfSprite_setTexture(data->text2.stext2c, data->textures.ttext2c, 0);
    sfSprite_setTexture(data->text2.stext2d, data->textures.ttext2d, 0);
    sfSprite_setTexture(data->text2.stext2e, data->textures.ttext2e, 0);
}

void initialize_text3(data_t *data)
{
    data->textures.ttext3a = sfTexture_createFromFile("test/text/text3/text3_opacity_20.png", NULL);
    data->textures.ttext3b = sfTexture_createFromFile("test/text/text3/text3_opacity_40.png", NULL);
    data->textures.ttext3c = sfTexture_createFromFile("test/text/text3/text3_opacity_60.png", NULL);
    data->textures.ttext3d = sfTexture_createFromFile("test/text/text3/text3_opacity_80.png", NULL);
    data->textures.ttext3e = sfTexture_createFromFile("test/text/text3/text3_opacity_100.png", NULL);
    data->text3.stext3a = sfSprite_create();
    data->text3.stext3b = sfSprite_create();
    data->text3.stext3c = sfSprite_create();
    data->text3.stext3d = sfSprite_create();
    data->text3.stext3e = sfSprite_create();
    sfSprite_setTexture(data->text3.stext3a, data->textures.ttext3a, 0);
    sfSprite_setTexture(data->text3.stext3b, data->textures.ttext3b, 0);
    sfSprite_setTexture(data->text3.stext3c, data->textures.ttext3c, 0);
    sfSprite_setTexture(data->text3.stext3d, data->textures.ttext3d, 0);
    sfSprite_setTexture(data->text3.stext3e, data->textures.ttext3e, 0);
}

void initialize_text4(data_t *data)
{
    data->textures.ttext4a = sfTexture_createFromFile("test/text/text4/text4_opacity_20.png", NULL);
    data->textures.ttext4b = sfTexture_createFromFile("test/text/text4/text4_opacity_40.png", NULL);
    data->textures.ttext4c = sfTexture_createFromFile("test/text/text4/text4_opacity_60.png", NULL);
    data->textures.ttext4d = sfTexture_createFromFile("test/text/text4/text4_opacity_80.png", NULL);
    data->textures.ttext4e = sfTexture_createFromFile("test/text/text4/text4_opacity_100.png", NULL);
    data->textures.tcommand = sfTexture_createFromFile("test/text/command.png", NULL);
    data->text4.stext4a = sfSprite_create();
    data->text4.stext4b = sfSprite_create();
    data->text4.stext4c = sfSprite_create();
    data->text4.stext4d = sfSprite_create();
    data->text4.stext4e = sfSprite_create();
    data->command.scommand = sfSprite_create();
    sfSprite_setTexture(data->text4.stext4a, data->textures.ttext4a, 0);
    sfSprite_setTexture(data->text4.stext4b, data->textures.ttext4b, 0);
    sfSprite_setTexture(data->text4.stext4c, data->textures.ttext4c, 0);
    sfSprite_setTexture(data->text4.stext4d, data->textures.ttext4d, 0);
    sfSprite_setTexture(data->text4.stext4e, data->textures.ttext4e, 0);
    sfSprite_setTexture(data->command.scommand, data->textures.tcommand, 0);
}