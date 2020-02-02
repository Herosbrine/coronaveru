
#include "structure.h"

void init_scope(data_t *data)
{
    data->texture.t_scope = sfTexture_createFromFile("image/scope.png", NULL);
    data->sprite_grotte.scope = sfSprite_create();
    sfSprite_setTexture(data->sprite_grotte.scope, data->texture.t_scope, 0);
    sfSprite_setPosition(data->sprite_grotte.scope, (sfVector2f){1920 / 2, 1080 / 2});
}
