
#include "structure.h"

void init_scope(d_t *d)
{
    d->texture.t_scope = sfTexture_createFromFile("image/scope.png", NULL);
    d->sprite_grotte.scope = sfSprite_create();
    sfSprite_setTexture(d->sprite_grotte.scope, d->texture.t_scope, 0);
    sfSprite_setPosition(d->sprite_grotte.scope, (sfVector2f){1920 / 2, 1080 / 2});
}
