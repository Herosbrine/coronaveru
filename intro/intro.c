#include "../include/structure.h"
#include "../include/game.h"

void intro()
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    window = sfRenderWindow_create(mode, "window_op", sfResize
    | sfClose, NULL);
     
     sfTexture *ttext1;
     ttext1 = sfTexture_createFromFile("intrigue_text/Untitled.png", NULL);
     sfSprite *stext1;
     stext1 = sfSprite_create();
     sfSprite_setTexture(stext1, ttext1, 0);

     sfTexture *ttext2;
     ttext2 = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2;
     stext2 = sfSprite_create();
     sfSprite_setTexture(stext2, ttext2, 0);
     
     sfTexture *ttext3;
     ttext3 = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3;
     stext3 = sfSprite_create();
     sfSprite_setTexture(stext3, ttext3, 0);

     sfTexture *ttext4;
     ttext4 = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4;
     stext4 = sfSprite_create();
     sfSprite_setTexture(stext4, ttext4, 0);

     sfTexture *ttext5;
     ttext5 = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5;
     stext5 = sfSprite_create();
     sfSprite_setTexture(stext5, ttext5, 0);

    sfTexture *ttext6;
     ttext6 = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6;
     stext6 = sfSprite_create();
     sfSprite_setTexture(stext6, ttext6, 0);

     sfTexture *ttext7;
     ttext7 = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7;
     stext7 = sfSprite_create();
     sfSprite_setTexture(stext7, ttext7, 0);

     sfTexture *ttext8;
     ttext8 = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8;
     stext8 = sfSprite_create();
     sfSprite_setTexture(stext8, ttext8, 0);

     sfTexture *ttext9;
     ttext9 = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9;
     stext9 = sfSprite_create();
     sfSprite_setTexture(stext9, ttext9, 0);

     sfTexture *ttext10;
     ttext10 = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
     sfSprite *stext10;
     stext10 = sfSprite_create();
     sfSprite_setTexture(stext10, ttext10, 0);

     sfTime time;
     sfClock *clock = sfClock_create();

     while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) < 3)
            sfRenderWindow_drawSprite(window, stext1, NULL);
        else if (sfTime_asSeconds(time) < 6)
            sfRenderWindow_drawSprite(window, stext2, NULL);
        else if (sfTime_asSeconds(time) < 9)
            sfRenderWindow_drawSprite(window, stext3, NULL);
        else if (sfTime_asSeconds(time) < 12)
            sfRenderWindow_drawSprite(window, stext4, NULL);
        else if (sfTime_asSeconds(time) < 16)
               sfRenderWindow_drawSprite(window, stext5, NULL);
        else if (sfTime_asSeconds(time) < 20)
               sfRenderWindow_drawSprite(window, stext6, NULL);
        else if (sfTime_asSeconds(time) < 24)
               sfRenderWindow_drawSprite(window, stext7, NULL);
        else if (sfTime_asSeconds(time) < 27)
               sfRenderWindow_drawSprite(window, stext8, NULL);
        else if (sfTime_asSeconds(time) < 30)
               sfRenderWindow_drawSprite(window, stext9, NULL);
        else if (sfTime_asSeconds(time) < 33)
               sfRenderWindow_drawSprite(window, stext10, NULL);
        sfRenderWindow_display(window);
     }
     sfRenderWindow_destroy(window);
}

void main()
{
     intro();
}