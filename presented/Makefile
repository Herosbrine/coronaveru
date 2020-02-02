##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## CORONAVIRUS
##

SRC = test.c \
      src/initialization.c \

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
