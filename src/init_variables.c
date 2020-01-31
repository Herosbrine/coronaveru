#include "structure.h"
#include "game.h"
#include "map_grotte.h"

void init_variables(data_t *data)
{
    data->window = create_window();
    init_map_grotte_sprite_texture(data);
}
