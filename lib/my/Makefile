##
## EPITECH PROJECT, 2019
## do_op
## File description:
## do operation
##

SRC	=	create_window.c \
		../../src/game.c \
		../../src/init_variables.c \
		../../src/event_gestion.c \
		../../src/map_one/init/init_sprite_texture.c \
		../../src/map_one/disp/disp_map.c \
		../../src/map_one/map_grotte.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

BIN	=	../../coraveru

FILE = ../../src/game.c

INCLUDE	=	-I../../include -L. -lmy

FLAG =	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all:	$(NAME) COMPILE

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

COMPILE:
	gcc -o $(BIN) $(FILE) $(INCLUDE) $(FLAG)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(BIN)

re:	fclean all