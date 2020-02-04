#include "structure.h"
#include "game.h"

void intro(d_t *d)
{
     sfTexture *ttext1;
     ttext1 = sfTexture_createFromFile("src/intro/intrigue_text/earth_in_dang_05.png", NULL);
     sfSprite *stext1;
     stext1 = sfSprite_create();
     sfSprite_setTexture(stext1, ttext1, 0);

     sfTexture *ttext1a;
     ttext1a = sfTexture_createFromFile("src/intro/intrigue_text/earth_in_dang_04.png", NULL);
     sfSprite *stext1a;
     stext1a = sfSprite_create();
     sfSprite_setTexture(stext1a, ttext1a, 0);

     sfTexture *ttext1b;
     ttext1b = sfTexture_createFromFile("src/intro/intrigue_text/earth_in_dang_03.png", NULL);
     sfSprite *stext1b;
     stext1b = sfSprite_create();
     sfSprite_setTexture(stext1b, ttext1b, 0);

     sfTexture *ttext1c;
     ttext1c = sfTexture_createFromFile("src/intro/intrigue_text/earth_in_dang_02.png", NULL);
     sfSprite *stext1c;
     stext1c = sfSprite_create();
     sfSprite_setTexture(stext1c, ttext1c, 0);

     sfTexture *ttext1d;
     ttext1d = sfTexture_createFromFile("src/intro/intrigue_text/earth_in_dang_01.png", NULL);
     sfSprite *stext1d;
     stext1d = sfSprite_create();
     sfSprite_setTexture(stext1d, ttext1d, 0);

     sfTexture *ttext2a;
     ttext2a = sfTexture_createFromFile("src/intro/intrigue_text/mysterius_virus100.png", NULL);
     sfSprite *stext2a;
     stext2a = sfSprite_create();
     sfSprite_setTexture(stext2a, ttext2a, 0);

     sfTexture *ttext2b;
     ttext2b = sfTexture_createFromFile("src/intro/intrigue_text/mysterius_virus80.png", NULL);
     sfSprite *stext2b;
     stext2b = sfSprite_create();
     sfSprite_setTexture(stext2b, ttext2b, 0);

     sfTexture *ttext2c;
     ttext2c = sfTexture_createFromFile("src/intro/intrigue_text/mysterius_virus60.png", NULL);
     sfSprite *stext2c;
     stext2c = sfSprite_create();
     sfSprite_setTexture(stext2c, ttext2c, 0);

     sfTexture *ttext2d;
     ttext2d = sfTexture_createFromFile("src/intro/intrigue_text/mysterius_virus40.png", NULL);
     sfSprite *stext2d;
     stext2d = sfSprite_create();
     sfSprite_setTexture(stext2d, ttext2d, 0);

     sfTexture *ttext2e;
     ttext2e = sfTexture_createFromFile("src/intro/intrigue_text/mysterius_virus20.png", NULL);
     sfSprite *stext2e;
     stext2e = sfSprite_create();
     sfSprite_setTexture(stext2e, ttext2e, 0);

     sfTexture *ttext3;
     ttext3 = sfTexture_createFromFile("src/intro/intrigue_text/coronaveru_100.png", NULL);
     sfSprite *stext3;
     stext3 = sfSprite_create();
     sfSprite_setTexture(stext3, ttext3, 0);

     sfTexture *ttext3a;
     ttext3a = sfTexture_createFromFile("src/intro/intrigue_text/coronaveru_80.png", NULL);
     sfSprite *stext3a;
     stext3a = sfSprite_create();
     sfSprite_setTexture(stext3a, ttext3a, 0);

     sfTexture *ttext3b;
     ttext3b = sfTexture_createFromFile("src/intro/intrigue_text/coronaveru_60.png", NULL);
     sfSprite *stext3b;
     stext3b = sfSprite_create();
     sfSprite_setTexture(stext3b, ttext3b, 0);

     sfTexture *ttext3c;
     ttext3c = sfTexture_createFromFile("src/intro/intrigue_text/coronaveru_40.png", NULL);
     sfSprite *stext3c;
     stext3c = sfSprite_create();
     sfSprite_setTexture(stext3c, ttext3c, 0);

     sfTexture *ttext3d;
     ttext3d = sfTexture_createFromFile("src/intro/intrigue_text/coronaveru_20.png", NULL);
     sfSprite *stext3d;
     stext3d = sfSprite_create();
     sfSprite_setTexture(stext3d, ttext3d, 0);

     sfTexture *ttext4;
     ttext4 = sfTexture_createFromFile("src/intro/intrigue_text/today100.png", NULL);
     sfSprite *stext4;
     stext4 = sfSprite_create();
     sfSprite_setTexture(stext4, ttext4, 0);

     sfTexture *ttext4a;
     ttext4a = sfTexture_createFromFile("src/intro/intrigue_text/today80.png", NULL);
     sfSprite *stext4a;
     stext4a = sfSprite_create();
     sfSprite_setTexture(stext4a, ttext4a, 0);

     sfTexture *ttext4b;
     ttext4b = sfTexture_createFromFile("src/intro/intrigue_text/today60.png", NULL);
     sfSprite *stext4b;
     stext4b = sfSprite_create();
     sfSprite_setTexture(stext4b, ttext4b, 0);

     sfTexture *ttext4c;
     ttext4c = sfTexture_createFromFile("src/intro/intrigue_text/today40.png", NULL);
     sfSprite *stext4c;
     stext4c = sfSprite_create();
     sfSprite_setTexture(stext4c, ttext4c, 0);

     sfTexture *ttext4d;
     ttext4d = sfTexture_createFromFile("src/intro/intrigue_text/today20.png", NULL);
     sfSprite *stext4d;
     stext4d = sfSprite_create();
     sfSprite_setTexture(stext4d, ttext4d, 0);

     sfTexture *ttext5;
     ttext5 = sfTexture_createFromFile("src/intro/intrigue_text/discovered_100.png", NULL);
     sfSprite *stext5;
     stext5 = sfSprite_create();
     sfSprite_setTexture(stext5, ttext5, 0);

     sfTexture *ttext5a;
     ttext5a = sfTexture_createFromFile("src/intro/intrigue_text/discovered_80.png", NULL);
     sfSprite *stext5a;
     stext5a = sfSprite_create();
     sfSprite_setTexture(stext5a, ttext5a, 0);

     sfTexture *ttext5b;
     ttext5b = sfTexture_createFromFile("src/intro/intrigue_text/discovered_60.png", NULL);
     sfSprite *stext5b;
     stext5b = sfSprite_create();
     sfSprite_setTexture(stext5b, ttext5b, 0);

     sfTexture *ttext5c;
     ttext5c = sfTexture_createFromFile("src/intro/intrigue_text/discovered_40.png", NULL);
     sfSprite *stext5c;
     stext5c = sfSprite_create();
     sfSprite_setTexture(stext5c, ttext5c, 0);

     sfTexture *ttext5d;
     ttext5d = sfTexture_createFromFile("src/intro/intrigue_text/discovered_20.png", NULL);
     sfSprite *stext5d;
     stext5d = sfSprite_create();
     sfSprite_setTexture(stext5d, ttext5d, 0);

    sfTexture *ttext6;
     ttext6 = sfTexture_createFromFile("src/intro/intrigue_text/need_planet_100.png", NULL);
     sfSprite *stext6;
     stext6 = sfSprite_create();
     sfSprite_setTexture(stext6, ttext6, 0);

    sfTexture *ttext6a;
     ttext6a = sfTexture_createFromFile("src/intro/intrigue_text/need_planet_80.png", NULL);
     sfSprite *stext6a;
     stext6a = sfSprite_create();
     sfSprite_setTexture(stext6a, ttext6a, 0);

    sfTexture *ttext6b;
     ttext6b = sfTexture_createFromFile("src/intro/intrigue_text/need_planet_60.png", NULL);
     sfSprite *stext6b;
     stext6b = sfSprite_create();
     sfSprite_setTexture(stext6b, ttext6b, 0);

    sfTexture *ttext6c;
     ttext6c = sfTexture_createFromFile("src/intro/intrigue_text/need_planet_40.png", NULL);
     sfSprite *stext6c;
     stext6c = sfSprite_create();
     sfSprite_setTexture(stext6c, ttext6c, 0);

    sfTexture *ttext6d;
     ttext6d = sfTexture_createFromFile("src/intro/intrigue_text/need_planet_20.png", NULL);
     sfSprite *stext6d;
     stext6d = sfSprite_create();
     sfSprite_setTexture(stext6d, ttext6d, 0);

     sfTexture *ttext7;
     ttext7 = sfTexture_createFromFile("src/intro/intrigue_text/damage_coronaveru_100.png", NULL);
     sfSprite *stext7;
     stext7 = sfSprite_create();
     sfSprite_setTexture(stext7, ttext7, 0);

     sfTexture *ttext7a;
     ttext7a = sfTexture_createFromFile("src/intro/intrigue_text/damage_coronaveru_80.png", NULL);
     sfSprite *stext7a;
     stext7a = sfSprite_create();
     sfSprite_setTexture(stext7a, ttext7a, 0);

     sfTexture *ttext7b;
     ttext7b = sfTexture_createFromFile("src/intro/intrigue_text/damage_coronaveru_60.png", NULL);
     sfSprite *stext7b;
     stext7b = sfSprite_create();
     sfSprite_setTexture(stext7b, ttext7b, 0);

     sfTexture *ttext7c;
     ttext7c = sfTexture_createFromFile("src/intro/intrigue_text/damage_coronaveru_40.png", NULL);
     sfSprite *stext7c;
     stext7c = sfSprite_create();
     sfSprite_setTexture(stext7c, ttext7c, 0);

     sfTexture *ttext7d;
     ttext7d = sfTexture_createFromFile("src/intro/intrigue_text/damage_coronaveru_20.png", NULL);
     sfSprite *stext7d;
     stext7d = sfSprite_create();
     sfSprite_setTexture(stext7d, ttext7d, 0);

     sfTexture *ttext8;
     ttext8 = sfTexture_createFromFile("src/intro/intrigue_text/eliminate_100.png", NULL);
     sfSprite *stext8;
     stext8 = sfSprite_create();
     sfSprite_setTexture(stext8, ttext8, 0);

     sfTexture *ttext8a;
     ttext8a = sfTexture_createFromFile("src/intro/intrigue_text/eliminate_80.png", NULL);
     sfSprite *stext8a;
     stext8a = sfSprite_create();
     sfSprite_setTexture(stext8a, ttext8a, 0);

     sfTexture *ttext8b;
     ttext8b = sfTexture_createFromFile("src/intro/intrigue_text/eliminate_60.png", NULL);
     sfSprite *stext8b;
     stext8b = sfSprite_create();
     sfSprite_setTexture(stext8b, ttext8b, 0);

     sfTexture *ttext8c;
     ttext8c = sfTexture_createFromFile("src/intro/intrigue_text/eliminate_40.png", NULL);
     sfSprite *stext8c;
     stext8c = sfSprite_create();
     sfSprite_setTexture(stext8c, ttext8c, 0);

     sfTexture *ttext8d;
     ttext8d = sfTexture_createFromFile("src/intro/intrigue_text/eliminate_20.png", NULL);
     sfSprite *stext8d;
     stext8d = sfSprite_create();
     sfSprite_setTexture(stext8d, ttext8d, 0);

     sfTexture *ttext9;
     ttext9 = sfTexture_createFromFile("src/intro/intrigue_text/if_fail_100.png", NULL);
     sfSprite *stext9;
     stext9 = sfSprite_create();
     sfSprite_setTexture(stext9, ttext9, 0);

     sfTexture *ttext9a;
     ttext9a = sfTexture_createFromFile("src/intro/intrigue_text/if_fail_80.png", NULL);
     sfSprite *stext9a;
     stext9a = sfSprite_create();
     sfSprite_setTexture(stext9a, ttext9a, 0);

     sfTexture *ttext9b;
     ttext9b = sfTexture_createFromFile("src/intro/intrigue_text/if_fail_60.png", NULL);
     sfSprite *stext9b;
     stext9b = sfSprite_create();
     sfSprite_setTexture(stext9b, ttext9b, 0);

     sfTexture *ttext9c;
     ttext9c = sfTexture_createFromFile("src/intro/intrigue_text/if_fail_40.png", NULL);
     sfSprite *stext9c;
     stext9c = sfSprite_create();
     sfSprite_setTexture(stext9c, ttext9c, 0);

     sfTexture *ttext9d;
     ttext9d = sfTexture_createFromFile("src/intro/intrigue_text/if_fail_20.png", NULL);
     sfSprite *stext9d;
     stext9d = sfSprite_create();
     sfSprite_setTexture(stext9d, ttext9d, 0);

    sfTexture *ttext10;
    ttext10 = sfTexture_createFromFile("src/intro/intrigue_text/luck_100.png", NULL);
    sfSprite *stext10;
    stext10 = sfSprite_create();
    sfSprite_setTexture(stext10, ttext10, 0);

    sfTexture *ttext10a;
    ttext10a = sfTexture_createFromFile("src/intro/intrigue_text/luck_80.png", NULL);
    sfSprite *stext10a;
    stext10a = sfSprite_create();
    sfSprite_setTexture(stext10a, ttext10a, 0);

    sfTexture *ttext10b;
    ttext10b = sfTexture_createFromFile("src/intro/intrigue_text/luck_60.png", NULL);
    sfSprite *stext10b;
    stext10b = sfSprite_create();
    sfSprite_setTexture(stext10b, ttext10b, 0);

    sfTexture *ttext10c;
    ttext10c = sfTexture_createFromFile("src/intro/intrigue_text/luck_40.png", NULL);
    sfSprite *stext10c;
    stext10c = sfSprite_create();
    sfSprite_setTexture(stext10c, ttext10c, 0);

    sfTexture *ttext10d;
    ttext10d = sfTexture_createFromFile("src/intro/intrigue_text/luck_20.png", NULL);
    sfSprite *stext10d;
    stext10d = sfSprite_create();
    sfSprite_setTexture(stext10d, ttext10d, 0);

    sfTime time;
    sfClock *clock = sfClock_create();
    sfSoundBuffer *sbang;
    sbang = sfSoundBuffer_createFromFile("src/intro/sound/bo1.ogg");
    sfSound *bang;
    bang = sfSound_create();
    sfSound_setBuffer(bang, sbang);
    sfSound_play(bang);
     while (sfRenderWindow_isOpen(d->window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(d->window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(d->window);
            }
        }
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) < 3)
            sfRenderWindow_drawSprite(d->window, stext1, NULL);
        else if (sfTime_asSeconds(time) < 3.1)
            sfRenderWindow_drawSprite(d->window, stext1a, NULL);
        else if (sfTime_asSeconds(time) < 3.2)
            sfRenderWindow_drawSprite(d->window, stext1b, NULL);
        else if (sfTime_asSeconds(time) < 3.30)
            sfRenderWindow_drawSprite(d->window, stext1c, NULL);
        else if (sfTime_asSeconds(time) < 3.40)
            sfRenderWindow_drawSprite(d->window, stext1d, NULL);

        else if (sfTime_asSeconds(time) < 7)
            sfRenderWindow_drawSprite(d->window, stext2a, NULL);
        else if (sfTime_asSeconds(time) < 7.1)
            sfRenderWindow_drawSprite(d->window, stext2b, NULL);
        else if (sfTime_asSeconds(time) < 7.2)
            sfRenderWindow_drawSprite(d->window, stext2c, NULL);
        else if (sfTime_asSeconds(time) < 7.30)
            sfRenderWindow_drawSprite(d->window, stext2d, NULL);
        else if (sfTime_asSeconds(time) < 7.40)
            sfRenderWindow_drawSprite(d->window, stext2e, NULL);

        else if (sfTime_asSeconds(time) < 11)
            sfRenderWindow_drawSprite(d->window, stext3, NULL);
        else if (sfTime_asSeconds(time) < 11.1)
            sfRenderWindow_drawSprite(d->window, stext3a, NULL);
        else if (sfTime_asSeconds(time) < 11.2)
            sfRenderWindow_drawSprite(d->window, stext3b, NULL);
        else if (sfTime_asSeconds(time) < 10.30)
            sfRenderWindow_drawSprite(d->window, stext3c, NULL);
        else if (sfTime_asSeconds(time) < 10.40)
            sfRenderWindow_drawSprite(d->window, stext3d, NULL);

        else if (sfTime_asSeconds(time) < 13)
            sfRenderWindow_drawSprite(d->window, stext4, NULL);
        else if (sfTime_asSeconds(time) < 13.1)
            sfRenderWindow_drawSprite(d->window, stext4a, NULL);
        else if (sfTime_asSeconds(time) < 13.2)
            sfRenderWindow_drawSprite(d->window, stext4b, NULL);
        else if (sfTime_asSeconds(time) < 13.30)
            sfRenderWindow_drawSprite(d->window, stext4c, NULL);
        else if (sfTime_asSeconds(time) < 13.40)
            sfRenderWindow_drawSprite(d->window, stext4d, NULL);

        else if (sfTime_asSeconds(time) < 17)
               sfRenderWindow_drawSprite(d->window, stext5, NULL);
        else if (sfTime_asSeconds(time) < 17.1)
               sfRenderWindow_drawSprite(d->window, stext5a, NULL);
        else if (sfTime_asSeconds(time) < 17.2)
               sfRenderWindow_drawSprite(d->window, stext5b, NULL);
        else if (sfTime_asSeconds(time) < 17.30)
               sfRenderWindow_drawSprite(d->window, stext5c, NULL);
        else if (sfTime_asSeconds(time) < 17.40)
               sfRenderWindow_drawSprite(d->window, stext5d, NULL);

        else if (sfTime_asSeconds(time) < 21)
               sfRenderWindow_drawSprite(d->window, stext6, NULL);
        else if (sfTime_asSeconds(time) < 21.1)
               sfRenderWindow_drawSprite(d->window, stext6a, NULL);
        else if (sfTime_asSeconds(time) < 21.2)
               sfRenderWindow_drawSprite(d->window, stext6b, NULL);
        else if (sfTime_asSeconds(time) < 21.30)
               sfRenderWindow_drawSprite(d->window, stext6c, NULL);
        else if (sfTime_asSeconds(time) < 21.40)
               sfRenderWindow_drawSprite(d->window, stext6d, NULL);

        else if (sfTime_asSeconds(time) < 25)
               sfRenderWindow_drawSprite(d->window, stext7, NULL);
        else if (sfTime_asSeconds(time) < 25.1)
               sfRenderWindow_drawSprite(d->window, stext7a, NULL);
        else if (sfTime_asSeconds(time) < 25.2)
               sfRenderWindow_drawSprite(d->window, stext7b, NULL);
        else if (sfTime_asSeconds(time) < 25.30)
               sfRenderWindow_drawSprite(d->window, stext7c, NULL);
        else if (sfTime_asSeconds(time) < 25.40)
               sfRenderWindow_drawSprite(d->window, stext7d, NULL);

        else if (sfTime_asSeconds(time) < 28)
               sfRenderWindow_drawSprite(d->window, stext8, NULL);
        else if (sfTime_asSeconds(time) < 28.1)
               sfRenderWindow_drawSprite(d->window, stext8a, NULL);
        else if (sfTime_asSeconds(time) < 28.2)
               sfRenderWindow_drawSprite(d->window, stext8b, NULL);
        else if (sfTime_asSeconds(time) < 28.30)
               sfRenderWindow_drawSprite(d->window, stext8c, NULL);
        else if (sfTime_asSeconds(time) < 28.40)
               sfRenderWindow_drawSprite(d->window, stext8d, NULL);

        else if (sfTime_asSeconds(time) < 31)
               sfRenderWindow_drawSprite(d->window, stext9, NULL);
        else if (sfTime_asSeconds(time) < 31.1)
               sfRenderWindow_drawSprite(d->window, stext9a, NULL);
        else if (sfTime_asSeconds(time) < 31.2)
               sfRenderWindow_drawSprite(d->window, stext9b, NULL);
        else if (sfTime_asSeconds(time) < 31.30)
               sfRenderWindow_drawSprite(d->window, stext9c, NULL);
        else if (sfTime_asSeconds(time) < 31.40)
               sfRenderWindow_drawSprite(d->window, stext9d, NULL);

        else if (sfTime_asSeconds(time) < 36.70)
               sfRenderWindow_drawSprite(d->window, stext10, NULL);
        else if (sfTime_asSeconds(time) < 36.80)
               sfRenderWindow_drawSprite(d->window, stext10a, NULL);
        else if (sfTime_asSeconds(time) < 36.90)
               sfRenderWindow_drawSprite(d->window, stext10b, NULL);
        else if (sfTime_asSeconds(time) < 37)
               sfRenderWindow_drawSprite(d->window, stext10c, NULL);
        else if (sfTime_asSeconds(time) < 37.10)
               sfRenderWindow_drawSprite(d->window, stext10d, NULL);

        else if (sfTime_asSeconds(time) > 37) {
                sfSoundBuffer_destroy(sbang);
                sfSound_destroy(bang);
                break;
        }
        sfRenderWindow_display(d->window);
     }
    sfTexture_destroy(ttext1);
    sfTexture_destroy(ttext1a);
    sfTexture_destroy(ttext1b);
    sfTexture_destroy(ttext1c);
    sfTexture_destroy(ttext1d);
    sfTexture_destroy(ttext2a);
    sfTexture_destroy(ttext2b);
    sfTexture_destroy(ttext2c);
    sfTexture_destroy(ttext2d);
    sfTexture_destroy(ttext2e);
    sfTexture_destroy(ttext3);
    sfTexture_destroy(ttext3a);
    sfTexture_destroy(ttext3b);
    sfTexture_destroy(ttext3c);
    sfTexture_destroy(ttext3d);
    sfTexture_destroy(ttext4);
    sfTexture_destroy(ttext4a);
    sfTexture_destroy(ttext4b);
    sfTexture_destroy(ttext4c);
    sfTexture_destroy(ttext4d);
    sfTexture_destroy(ttext5);
    sfTexture_destroy(ttext5a);
    sfTexture_destroy(ttext5b);
    sfTexture_destroy(ttext5c);
    sfTexture_destroy(ttext5d);
    sfTexture_destroy(ttext6);
    sfTexture_destroy(ttext6a);
    sfTexture_destroy(ttext6b);
    sfTexture_destroy(ttext6c);
    sfTexture_destroy(ttext6d);
    sfTexture_destroy(ttext7);
    sfTexture_destroy(ttext7a);
    sfTexture_destroy(ttext7b);
    sfTexture_destroy(ttext7c);
    sfTexture_destroy(ttext7d);
    sfTexture_destroy(ttext8);
    sfTexture_destroy(ttext8a);
    sfTexture_destroy(ttext8b);
    sfTexture_destroy(ttext8c);
    sfTexture_destroy(ttext8d);
    sfTexture_destroy(ttext9);
    sfTexture_destroy(ttext9a);
    sfTexture_destroy(ttext9b);
    sfTexture_destroy(ttext9c);
    sfTexture_destroy(ttext9d);
    sfTexture_destroy(ttext10);
    sfTexture_destroy(ttext10a);
    sfTexture_destroy(ttext10b);
    sfTexture_destroy(ttext10c);
    sfTexture_destroy(ttext10d);
    sfSprite_destroy(stext1);
    sfSprite_destroy(stext1a);
    sfSprite_destroy(stext1b);
    sfSprite_destroy(stext1c);
    sfSprite_destroy(stext1d);
    sfSprite_destroy(stext2a);
    sfSprite_destroy(stext2b);
    sfSprite_destroy(stext2c);
    sfSprite_destroy(stext2d);
    sfSprite_destroy(stext2e);
    sfSprite_destroy(stext3);
    sfSprite_destroy(stext3a);
    sfSprite_destroy(stext3b);
    sfSprite_destroy(stext3c);
    sfSprite_destroy(stext3d);
    sfSprite_destroy(stext4);
    sfSprite_destroy(stext4a);
    sfSprite_destroy(stext4b);
    sfSprite_destroy(stext4c);
    sfSprite_destroy(stext4d);
    sfSprite_destroy(stext5);
    sfSprite_destroy(stext5a);
    sfSprite_destroy(stext5b);
    sfSprite_destroy(stext5c);
    sfSprite_destroy(stext5d);
    sfSprite_destroy(stext6);
    sfSprite_destroy(stext6a);
    sfSprite_destroy(stext6b);
    sfSprite_destroy(stext6c);
    sfSprite_destroy(stext6d);
    sfSprite_destroy(stext7);
    sfSprite_destroy(stext7a);
    sfSprite_destroy(stext7b);
    sfSprite_destroy(stext7c);
    sfSprite_destroy(stext7d);
    sfSprite_destroy(stext8);
    sfSprite_destroy(stext8a);
    sfSprite_destroy(stext8b);
    sfSprite_destroy(stext8c);
    sfSprite_destroy(stext8d);
    sfSprite_destroy(stext9);
    sfSprite_destroy(stext9a);
    sfSprite_destroy(stext9b);
    sfSprite_destroy(stext9c);
    sfSprite_destroy(stext9d);
    sfSprite_destroy(stext10);
    sfSprite_destroy(stext10a);
    sfSprite_destroy(stext10b);
    sfSprite_destroy(stext10c);
    sfSprite_destroy(stext10d);
}