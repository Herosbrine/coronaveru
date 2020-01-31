##
## EPITECH PROJECT, 2019
## makefile
## File description:
## compile makefile 2
##

all:	COMPILE

COMPILE:
	make -C ./lib/my

clean:
	make clean -C ./lib/my/

fclean:	clean
	make fclean -C ./lib/my/

re:	fclean all
