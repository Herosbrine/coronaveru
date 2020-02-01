#include "../include/structure.h"
#include "../include/game.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <stddef.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/System/Export.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Types.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Context.h>
#include <SFML/Window.h>
#include <SFML/System/Clock.h>

void intro()
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    window = sfRenderWindow_create(mode, "window_op", sfResize
    | sfClose, NULL);

     sfTexture *ttext1;
     ttext1 = sfTexture_createFromFile("intrigue_text/earth_in_dang_05.png", NULL);
     sfSprite *stext1;
     stext1 = sfSprite_create();
     sfSprite_setTexture(stext1, ttext1, 0);

     sfTexture *ttext1a;
     ttext1a = sfTexture_createFromFile("intrigue_text/earth_in_dang_04.png", NULL);
     sfSprite *stext1a;
     stext1a = sfSprite_create();
     sfSprite_setTexture(stext1a, ttext1a, 0);

     sfTexture *ttext1b;
     ttext1b = sfTexture_createFromFile("intrigue_text/earth_in_dang_03.png", NULL);
     sfSprite *stext1b;
     stext1b = sfSprite_create();
     sfSprite_setTexture(stext1b, ttext1b, 0);

     sfTexture *ttext1c;
     ttext1c = sfTexture_createFromFile("intrigue_text/earth_in_dang_02.png", NULL);
     sfSprite *stext1c;
     stext1c = sfSprite_create();
     sfSprite_setTexture(stext1c, ttext1c, 0);

     sfTexture *ttext1d;
     ttext1d = sfTexture_createFromFile("intrigue_text/earth_in_dang_01.png", NULL);
     sfSprite *stext1d;
     stext1d = sfSprite_create();
     sfSprite_setTexture(stext1d, ttext1d, 0);




     sfTexture *ttext2a;
     ttext2a = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2a;
     stext2a = sfSprite_create();
     sfSprite_setTexture(stext2a, ttext2a, 0);

     sfTexture *ttext2b;
     ttext2b = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2b;
     stext2b = sfSprite_create();
     sfSprite_setTexture(stext2b, ttext2b, 0);

     sfTexture *ttext2c;
     ttext2c = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2c;
     stext2c = sfSprite_create();
     sfSprite_setTexture(stext2c, ttext2c, 0);

     sfTexture *ttext2d;
     ttext2d = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2d;
     stext2d = sfSprite_create();
     sfSprite_setTexture(stext2d, ttext2d, 0);


     sfTexture *ttext2e;
     ttext2e = sfTexture_createFromFile("intrigue_text/text_2.png", NULL);
     sfSprite *stext2e;
     stext2e = sfSprite_create();
     sfSprite_setTexture(stext2e, ttext2e, 0);





     sfTexture *ttext3;
     ttext3 = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3;
     stext3 = sfSprite_create();
     sfSprite_setTexture(stext3, ttext3, 0);

     sfTexture *ttext3a;
     ttext3a = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3a;
     stext3a = sfSprite_create();
     sfSprite_setTexture(stext3a, ttext3a, 0);

     sfTexture *ttext3b;
     ttext3b = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3b;
     stext3b = sfSprite_create();
     sfSprite_setTexture(stext3b, ttext3b, 0);

     sfTexture *ttext3c;
     ttext3c = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3c;
     stext3c = sfSprite_create();
     sfSprite_setTexture(stext3c, ttext3c, 0);

     sfTexture *ttext3d;
     ttext3d = sfTexture_createFromFile("intrigue_text/text_3.png", NULL);
     sfSprite *stext3d;
     stext3d = sfSprite_create();
     sfSprite_setTexture(stext3d, ttext3d, 0);





     sfTexture *ttext4;
     ttext4 = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4;
     stext4 = sfSprite_create();
     sfSprite_setTexture(stext4, ttext4, 0);

     sfTexture *ttext4a;
     ttext4a = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4a;
     stext4a = sfSprite_create();
     sfSprite_setTexture(stext4a, ttext4a, 0);

     sfTexture *ttext4b;
     ttext4b = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4b;
     stext4b = sfSprite_create();
     sfSprite_setTexture(stext4b, ttext4b, 0);

     sfTexture *ttext4c;
     ttext4c = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4c;
     stext4c = sfSprite_create();
     sfSprite_setTexture(stext4c, ttext4c, 0);

     sfTexture *ttext4d;
     ttext4d = sfTexture_createFromFile("intrigue_text/text_4.png", NULL);
     sfSprite *stext4d;
     stext4d = sfSprite_create();
     sfSprite_setTexture(stext4d, ttext4d, 0);




     sfTexture *ttext5;
     ttext5 = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5;
     stext5 = sfSprite_create();
     sfSprite_setTexture(stext5, ttext5, 0);

     sfTexture *ttext5a;
     ttext5a = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5a;
     stext5a = sfSprite_create();
     sfSprite_setTexture(stext5a, ttext5a, 0);

     sfTexture *ttext5b;
     ttext5b = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5b;
     stext5 = sfSprite_create();
     sfSprite_setTexture(stext5b, ttext5b, 0);

     sfTexture *ttext5c;
     ttext5c = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5c;
     stext5c = sfSprite_create();
     sfSprite_setTexture(stext5c, ttext5c, 0);

     sfTexture *ttext5d;
     ttext5d = sfTexture_createFromFile("intrigue_text/text_5.png", NULL);
     sfSprite *stext5d;
     stext5d = sfSprite_create();
     sfSprite_setTexture(stext5d, ttext5d, 0);







    sfTexture *ttext6;
     ttext6 = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6;
     stext6 = sfSprite_create();
     sfSprite_setTexture(stext6, ttext6, 0);

    sfTexture *ttext6a;
     ttext6a = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6a;
     stext6a = sfSprite_create();
     sfSprite_setTexture(stext6a, ttext6a, 0);

    sfTexture *ttext6b;
     ttext6b = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6b;
     stext6b = sfSprite_create();
     sfSprite_setTexture(stext6b, ttext6b, 0);

    sfTexture *ttext6c;
     ttext6c = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6c;
     stext6c = sfSprite_create();
     sfSprite_setTexture(stext6c, ttext6c, 0);

    sfTexture *ttext6d;
     ttext6d = sfTexture_createFromFile("intrigue_text/text_6.png", NULL);
     sfSprite *stext6d;
     stext6d = sfSprite_create();
     sfSprite_setTexture(stext6d, ttext6d, 0);







     sfTexture *ttext7;
     ttext7 = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7;
     stext7 = sfSprite_create();
     sfSprite_setTexture(stext7, ttext7, 0);

     sfTexture *ttext7a;
     ttext7a = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7a;
     stext7a = sfSprite_create();
     sfSprite_setTexture(stext7a, ttext7a, 0);

     sfTexture *ttext7b;
     ttext7b = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7b;
     stext7b = sfSprite_create();
     sfSprite_setTexture(stext7b, ttext7b, 0);

     sfTexture *ttext7c;
     ttext7c = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7c;
     stext7c = sfSprite_create();
     sfSprite_setTexture(stext7c, ttext7c, 0);

     sfTexture *ttext7d;
     ttext7d = sfTexture_createFromFile("intrigue_text/text_7.png", NULL);
     sfSprite *stext7d;
     stext7d = sfSprite_create();
     sfSprite_setTexture(stext7d, ttext7d, 0);






     sfTexture *ttext8;
     ttext8 = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8;
     stext8 = sfSprite_create();
     sfSprite_setTexture(stext8, ttext8, 0);

     sfTexture *ttext8a;
     ttext8a = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8a;
     stext8a = sfSprite_create();
     sfSprite_setTexture(stext8a, ttext8a, 0);

     sfTexture *ttext8b;
     ttext8b = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8b;
     stext8b = sfSprite_create();
     sfSprite_setTexture(stext8b, ttext8b, 0);

     sfTexture *ttext8c;
     ttext8c = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8c;
     stext8c = sfSprite_create();
     sfSprite_setTexture(stext8c, ttext8c, 0);

     sfTexture *ttext8d;
     ttext8d = sfTexture_createFromFile("intrigue_text/text_8.png", NULL);
     sfSprite *stext8d;
     stext8d = sfSprite_create();
     sfSprite_setTexture(stext8d, ttext8d, 0);








     sfTexture *ttext9;
     ttext9 = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9;
     stext9 = sfSprite_create();
     sfSprite_setTexture(stext9, ttext9, 0);

     sfTexture *ttext9a;
     ttext9a = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9a;
     stext9a = sfSprite_create();
     sfSprite_setTexture(stext9a, ttext9a, 0);

     sfTexture *ttext9b;
     ttext9b = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9b;
     stext9b = sfSprite_create();
     sfSprite_setTexture(stext9b, ttext9b, 0);

     sfTexture *ttext9c;
     ttext9c = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9c;
     stext9c = sfSprite_create();
     sfSprite_setTexture(stext9c, ttext9c, 0);

     sfTexture *ttext9d;
     ttext9d = sfTexture_createFromFile("intrigue_text/text_9.png", NULL);
     sfSprite *stext9d;
     stext9d = sfSprite_create();
     sfSprite_setTexture(stext9d, ttext9d, 0);








    sfTexture *ttext10;
    ttext10 = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
    sfSprite *stext10;
    stext10 = sfSprite_create();
    sfSprite_setTexture(stext10, ttext10, 0);

    sfTexture *ttext10a;
    ttext10a = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
    sfSprite *stext10a;
    stext10a = sfSprite_create();
    sfSprite_setTexture(stext10a, ttext10a, 0);

    sfTexture *ttext10b;
    ttext10b = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
    sfSprite *stext10b;
    stext10b = sfSprite_create();
    sfSprite_setTexture(stext10b, ttext10b, 0);

    sfTexture *ttext10c;
    ttext10c = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
    sfSprite *stext10c;
    stext10c = sfSprite_create();
    sfSprite_setTexture(stext10c, ttext10c, 0);

    sfTexture *ttext10d;
    ttext10d = sfTexture_createFromFile("intrigue_text/text_10.png", NULL);
    sfSprite *stext10d;
    stext10d = sfSprite_create();
    sfSprite_setTexture(stext10d, ttext10d, 0);




    sfTime time;
    sfClock *clock = sfClock_create();
    sfSoundBuffer *sbang;
    sbang = sfSoundBuffer_createFromFile("sound/bo1.ogg");
    sfSound *bang;
    bang = sfSound_create();
    sfSound_setBuffer(bang, sbang);
    sfSound_play(bang);
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
        else if (sfTime_asSeconds(time) < 3.1)
            sfRenderWindow_drawSprite(window, stext1a, NULL);
        else if (sfTime_asSeconds(time) < 3.18)
            sfRenderWindow_drawSprite(window, stext1b, NULL);
        else if (sfTime_asSeconds(time) < 3.26)
            sfRenderWindow_drawSprite(window, stext1c, NULL);
        else if (sfTime_asSeconds(time) < 3.34)
            sfRenderWindow_drawSprite(window, stext1d, NULL);



        else if (sfTime_asSeconds(time) < 7)
            sfRenderWindow_drawSprite(window, stext2a, NULL);
        else if (sfTime_asSeconds(time) < 7.1)
            sfRenderWindow_drawSprite(window, stext2b, NULL);
        else if (sfTime_asSeconds(time) < 7.18)
            sfRenderWindow_drawSprite(window, stext2c, NULL);
        else if (sfTime_asSeconds(time) < 7.26)
            sfRenderWindow_drawSprite(window, stext2d, NULL);
        else if (sfTime_asSeconds(time) < 7.34)
            sfRenderWindow_drawSprite(window, stext2e, NULL);




        else if (sfTime_asSeconds(time) < 11)
            sfRenderWindow_drawSprite(window, stext3, NULL);
        else if (sfTime_asSeconds(time) < 11.1)
            sfRenderWindow_drawSprite(window, stext3a, NULL);
        else if (sfTime_asSeconds(time) < 11.18)
            sfRenderWindow_drawSprite(window, stext3b, NULL);
        else if (sfTime_asSeconds(time) < 10.26)
            sfRenderWindow_drawSprite(window, stext3c, NULL);
        else if (sfTime_asSeconds(time) < 10.34)
            sfRenderWindow_drawSprite(window, stext3d, NULL);




        else if (sfTime_asSeconds(time) < 13)
            sfRenderWindow_drawSprite(window, stext4, NULL);
        else if (sfTime_asSeconds(time) < 13.1)
            sfRenderWindow_drawSprite(window, stext4a, NULL);
        else if (sfTime_asSeconds(time) < 13.18)
            sfRenderWindow_drawSprite(window, stext4b, NULL);
        else if (sfTime_asSeconds(time) < 13.26)
            sfRenderWindow_drawSprite(window, stext4c, NULL);
        else if (sfTime_asSeconds(time) < 13.34)
            sfRenderWindow_drawSprite(window, stext4d, NULL);




        else if (sfTime_asSeconds(time) < 17)
               sfRenderWindow_drawSprite(window, stext5, NULL);
        else if (sfTime_asSeconds(time) < 17.1)
               sfRenderWindow_drawSprite(window, stext5a, NULL);
        else if (sfTime_asSeconds(time) < 17.18)
               sfRenderWindow_drawSprite(window, stext5b, NULL);
        else if (sfTime_asSeconds(time) < 17.26)
               sfRenderWindow_drawSprite(window, stext5c, NULL);
        else if (sfTime_asSeconds(time) < 17.34)
               sfRenderWindow_drawSprite(window, stext5d, NULL);




        else if (sfTime_asSeconds(time) < 21)
               sfRenderWindow_drawSprite(window, stext6, NULL);
        else if (sfTime_asSeconds(time) < 21.1)
               sfRenderWindow_drawSprite(window, stext6a, NULL);
        else if (sfTime_asSeconds(time) < 21.18)
               sfRenderWindow_drawSprite(window, stext6b, NULL);
        else if (sfTime_asSeconds(time) < 21.26)
               sfRenderWindow_drawSprite(window, stext6c, NULL);
        else if (sfTime_asSeconds(time) < 21.34)
               sfRenderWindow_drawSprite(window, stext6d, NULL);




        else if (sfTime_asSeconds(time) < 25)
               sfRenderWindow_drawSprite(window, stext7, NULL);
        else if (sfTime_asSeconds(time) < 25.1)
               sfRenderWindow_drawSprite(window, stext7a, NULL);
        else if (sfTime_asSeconds(time) < 25.18)
               sfRenderWindow_drawSprite(window, stext7b, NULL);
        else if (sfTime_asSeconds(time) < 25.26)
               sfRenderWindow_drawSprite(window, stext7c, NULL);
        else if (sfTime_asSeconds(time) < 25.34)
               sfRenderWindow_drawSprite(window, stext7d, NULL);





        else if (sfTime_asSeconds(time) < 28)
               sfRenderWindow_drawSprite(window, stext8, NULL);
        else if (sfTime_asSeconds(time) < 28.1)
               sfRenderWindow_drawSprite(window, stext8a, NULL);
        else if (sfTime_asSeconds(time) < 28.18)
               sfRenderWindow_drawSprite(window, stext8b, NULL);
        else if (sfTime_asSeconds(time) < 28.26)
               sfRenderWindow_drawSprite(window, stext8c, NULL);
        else if (sfTime_asSeconds(time) < 28.34)
               sfRenderWindow_drawSprite(window, stext8d, NULL);




        else if (sfTime_asSeconds(time) < 31)
               sfRenderWindow_drawSprite(window, stext9, NULL);
        else if (sfTime_asSeconds(time) < 31.1)
               sfRenderWindow_drawSprite(window, stext9a, NULL);
        else if (sfTime_asSeconds(time) < 31.18)
               sfRenderWindow_drawSprite(window, stext9b, NULL);
        else if (sfTime_asSeconds(time) < 31.26)
               sfRenderWindow_drawSprite(window, stext9c, NULL);
        else if (sfTime_asSeconds(time) < 31.34)
               sfRenderWindow_drawSprite(window, stext9d, NULL);





        else if (sfTime_asSeconds(time) < 34)
               sfRenderWindow_drawSprite(window, stext10, NULL);
        else if (sfTime_asSeconds(time) < 34.1)
               sfRenderWindow_drawSprite(window, stext10a, NULL);
        else if (sfTime_asSeconds(time) < 34.18)
               sfRenderWindow_drawSprite(window, stext10b, NULL);
        else if (sfTime_asSeconds(time) < 34.26)
               sfRenderWindow_drawSprite(window, stext10c, NULL);
        else if (sfTime_asSeconds(time) < 34.34)
               sfRenderWindow_drawSprite(window, stext10d, NULL);


        else if (sfTime_asSeconds(time) > 37) {
              sfSound_destroy(bang);
              sfSoundBuffer_destroy(sbang);
              break;
        }
        sfRenderWindow_display(window);
     }
     sfTexture_destroy(ttext1);
     sfTexture_destroy(ttext1a);
     sfTexture_destroy(ttext1b);
     sfTexture_destroy(ttext1c);
     sfTexture_destroy(ttext1d);
     sfTexture_destroy(ttext2);
     sfTexture_destroy(ttext3);
     sfTexture_destroy(ttext4);
     sfTexture_destroy(ttext5);
     sfTexture_destroy(ttext6);
     sfTexture_destroy(ttext7);
     sfTexture_destroy(ttext8);
     sfTexture_destroy(ttext9);

     sfSprite_destroy(stext1);
     sfSprite_destroy(stext1a);
     sfSprite_destroy(stext1b);
     sfSprite_destroy(stext1c);
     sfSprite_destroy(stext1d);
     sfSprite_destroy(stext2);
     sfSprite_destroy(stext3);
     sfSprite_destroy(stext4);
     sfSprite_destroy(stext5);
     sfSprite_destroy(stext6);
     sfSprite_destroy(stext7);
     sfSprite_destroy(stext8);
     sfSprite_destroy(stext9);
     sfRenderWindow_destroy(window);
}

void main()
{
     intro();
}