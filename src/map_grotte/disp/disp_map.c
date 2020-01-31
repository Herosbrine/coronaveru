#include "../../../header/structure.h"

void disp_map(data_t *data)
{
    sfRenderWindow_drawSprite(data->window, data->map_grotte.layer_a.sprite, NULL);
    sfRenderWindow_drawSprite(data->window, data->map_grotte.layer_b.sprite, NULL);
    sfRenderWindow_drawSprite(data->window, data->map_grotte.layer_c.sprite, NULL);
    sfRenderWindow_drawSprite(data->window, data->map_grotte.layer_d.sprite, NULL);
    sfRenderWindow_drawSprite(data->window, data->map_grotte.layer_e.sprite, NULL);
}