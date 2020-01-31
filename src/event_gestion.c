#include "structure.h"

void event_gestion(data_t *data)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(data->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(data->window);
    }
}
