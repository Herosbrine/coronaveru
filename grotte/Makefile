##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## for CORONAVIRUS
##

SRC	=	main.c \
		src/init_variables.c \
		src/event_gestion.c \
		src/game_instruction.c \
		src/map_grotte/init/init_sprite_texture.c \
		src/map_grotte/disp/disp_map.c \
		src/map_grotte/map_grotte.c \
		src/display_sprite.c \
		src/map_grotte/init/init_grotte_layer.c \
		src/map_grotte/move/move_map_grotte.c \

FLAGS =-I./include

LIB =-lmy -L./lib/my

NAME = coronavirus

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc $(FLAGS) -o $(NAME) $(SRC) $(LIB) -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

debug:
	gcc $(FLAGS) -g3 $(SRC) $(LIB)

clean:
	make clean -C ./lib/my/
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib/my/
	rm -f $(NAME)

re: fclean all