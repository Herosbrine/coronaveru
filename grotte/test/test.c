#include "game.h"
#include "structure.h"

void display_text1(data_t *data)
{
    if (sfTime_asSeconds(data->timer.time) < 3)
        sfRenderWindow_drawSprite(data->window, data->text1.stext1e, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 3.1)
        sfRenderWindow_drawSprite(data->window, data->text1.stext1d, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 3.2)
        sfRenderWindow_drawSprite(data->window, data->text1.stext1c, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 3.3)
        sfRenderWindow_drawSprite(data->window, data->text1.stext1b, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 3.4)
        sfRenderWindow_drawSprite(data->window, data->text1.stext1a, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 7)
        sfRenderWindow_drawSprite(data->window, data->text2.stext2e, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 7.1)
        sfRenderWindow_drawSprite(data->window, data->text2.stext2d, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 7.2)
        sfRenderWindow_drawSprite(data->window, data->text2.stext2c, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 7.3)
        sfRenderWindow_drawSprite(data->window, data->text2.stext2b, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 7.4)
        sfRenderWindow_drawSprite(data->window, data->text2.stext2a, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 10)
        sfRenderWindow_drawSprite(data->window, data->text3.stext3e, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 10.1)
        sfRenderWindow_drawSprite(data->window, data->text3.stext3d, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 10.2)
        sfRenderWindow_drawSprite(data->window, data->text3.stext3c, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 10.3)
        sfRenderWindow_drawSprite(data->window, data->text3.stext3b, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 10.4)
        sfRenderWindow_drawSprite(data->window, data->text3.stext3a, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 13)
        sfRenderWindow_drawSprite(data->window, data->text4.stext4e, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 13.1)
        sfRenderWindow_drawSprite(data->window, data->text4.stext4d, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 13.2)
        sfRenderWindow_drawSprite(data->window, data->text4.stext4c, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 13.3)
        sfRenderWindow_drawSprite(data->window, data->text4.stext4b, NULL);
    else if (sfTime_asSeconds(data->timer.time) < 13.4)
        sfRenderWindow_drawSprite(data->window, data->text4.stext4a, NULL);

    else if (sfTime_asSeconds(data->timer.time) < 16)
        sfRenderWindow_drawSprite(data->window, data->command.scommand, NULL);
    sfRenderWindow_display(data->window);
}

void my_destroy(data_t *data)
{
    sfTexture_destroy(data->textures.ttext1a);
    sfTexture_destroy(data->textures.ttext1b);
    sfTexture_destroy(data->textures.ttext1c);
    sfTexture_destroy(data->textures.ttext1d);
    sfTexture_destroy(data->textures.ttext1e);
    sfTexture_destroy(data->textures.ttext2a);
    sfTexture_destroy(data->textures.ttext2b);
    sfTexture_destroy(data->textures.ttext2c);
    sfTexture_destroy(data->textures.ttext2d);
    sfTexture_destroy(data->textures.ttext2e);
    sfTexture_destroy(data->textures.ttext3a);
    sfTexture_destroy(data->textures.ttext3b);
    sfTexture_destroy(data->textures.ttext3c);
    sfTexture_destroy(data->textures.ttext3d);
    sfTexture_destroy(data->textures.ttext3e);
    sfTexture_destroy(data->textures.ttext4a);
    sfTexture_destroy(data->textures.ttext4b);
    sfTexture_destroy(data->textures.ttext4c);
    sfTexture_destroy(data->textures.ttext4d);
    sfTexture_destroy(data->textures.ttext4e);
    sfSprite_destroy(data->text1.stext1a);
    sfSprite_destroy(data->text1.stext1b);
    sfSprite_destroy(data->text1.stext1c);
    sfSprite_destroy(data->text1.stext1d);
    sfSprite_destroy(data->text1.stext1e);
    sfSprite_destroy(data->text2.stext2a);
    sfSprite_destroy(data->text2.stext2b);
    sfSprite_destroy(data->text2.stext2c);
    sfSprite_destroy(data->text2.stext2d);
    sfSprite_destroy(data->text2.stext2e);
    sfSprite_destroy(data->text3.stext3a);
    sfSprite_destroy(data->text3.stext3b);
    sfSprite_destroy(data->text3.stext3c);
    sfSprite_destroy(data->text3.stext3d);
    sfSprite_destroy(data->text3.stext3e);
    sfSprite_destroy(data->text4.stext4a);
    sfSprite_destroy(data->text4.stext4b);
    sfSprite_destroy(data->text4.stext4c);
    sfSprite_destroy(data->text4.stext4d);
    sfSprite_destroy(data->text4.stext4e);
    sfRenderWindow_destroy(data->window);
}

void game_loop(data_t *data)
{
    data->timer.clock = sfClock_create();
    while (sfRenderWindow_isOpen(data->window)){
        sfEvent event;
        while (sfRenderWindow_pollEvent(data->window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(data->window);
        }
        data->timer.time = sfClock_getElapsedTime(data->timer.clock);
        display_text1(data);
    }
    my_destroy(data);
}

int video(data_t *data)
{
    srand(time(NULL));
    initialize_data(&data);
    game_loop(&data);
    return (0);
}