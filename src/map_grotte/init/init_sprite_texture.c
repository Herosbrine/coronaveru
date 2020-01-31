#include "structure.h"



void init_map_grotte_sprite_texture(data_t *data)
{
    init_texture(data);
    init_sprite(data);
}

void init_texture(data_t *data)
{
    data->texture.wall = sfTexture_createFromFile(LAYER_1, NULL);
    data->texture.layer_a = sfTexture_createFromFile(LAYER_2, NULL);
    data->texture.layer_b = sfTexture_createFromFile(LAYER_3, NULL);
    data->texture.layer_c = sfTexture_createFromFile(LAYER_4, NULL);
    data->texture.layer_d = sfTexture_createFromFile(LAYER_5, NULL);
    data->texture.layer_e = sfTexture_createFromFile(LAYER_6, NULL);

}

void init_sprite(data_t *data)
{
    init_layer_a(data);
    init_layer_b(data);
    init_layer_c(data);
    init_layer_d(data);
    init_layer_e(data);
}

void init_layer_a(data_t *data)
{
    data->map_grotte.layer_a.sprite = sfSprite_create();
    data->map_grotte.layer_a_next.sprite = sfSprite_create();
    sfSprite_setTexture(data->map_grotte.layer_a.sprite,
    data->map_grotte.layer_a.texture, 0);
    sfSprite_setTexture(data->map_grotte.layer_a_next.sprite,
    data->map_grotte.layer_a.texture, 0);
}

void init_layer_b(data_t *data)
{
    data->map_grotte.layer_b.sprite = sfSprite_create();
    data->map_grotte.layer_b_next.sprite = sfSprite_create();
    sfSprite_setTexture(data->map_grotte.layer_b.sprite,
    data->map_grotte.layer_b.texture, 0);
    sfSprite_setTexture(data->map_grotte.layer_b_next.sprite,
    data->map_grotte.layer_b.texture, 0);
}

void init_layer_c(data_t *data)
{
    data->map_grotte.layer_c.sprite = sfSprite_create();
    data->map_grotte.layer_c_next.sprite = sfSprite_create();
    sfSprite_setTexture(data->map_grotte.layer_c.sprite,
    data->map_grotte.layer_c.texture, 0);
    sfSprite_setTexture(data->map_grotte.layer_c_next.sprite,
    data->map_grotte.layer_c.texture, 0);
}

void init_layer_d(data_t *data)
{
    data->map_grotte.layer_d.sprite = sfSprite_create();
    data->map_grotte.layer_d_next.sprite = sfSprite_create();
    sfSprite_setTexture(data->map_grotte.layer_d.sprite,
    data->map_grotte.layer_d.texture, 0);
    sfSprite_setTexture(data->map_grotte.layer_d_next.sprite,
    data->map_grotte.layer_d.texture, 0);
}

void init_layer_e(data_t *data)
{
    data->map_grotte.layer_e.sprite = sfSprite_create();
    data->map_grotte.layer_e_next.sprite = sfSprite_create();
    sfSprite_setTexture(data->map_grotte.layer_e.sprite,
    data->map_grotte.layer_e.texture, 0);
    sfSprite_setTexture(data->map_grotte.layer_e_next.sprite,
    data->map_grotte.layer_e.texture, 0);
}