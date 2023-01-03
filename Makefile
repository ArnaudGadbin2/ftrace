##
## EPITECH PROJECT, 2018
## strace
## File description:
## Epitech project
##

MAIN		=	main.c

CC			=	gcc

CFLAGS		=	-W -Wall -Wextra

OBJ			=	$(SRC:.c=.o)

NAME		=	ftrace

all: main

main: $(OBJ)
	$(CC) $(MAIN) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all