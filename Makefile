# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 20:27:43 by sganon            #+#    #+#              #
#    Updated: 2015/12/14 15:46:48 by sganon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f
INC		= -I./inc
LDFLAGS	= -L./inc
LDLIBS	= -lft

SRC 	= src/main.c \
		  src/check.c \
		  src/read.c \
		  src/pattern.c \
		  src/tab_to_lst.c \
		  src/move_tetri.c \
		  src/move_tetri2.c \

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "Creating objects..."
	@$(CC) $(FLAGS) -c $(SRC) $(INC)
	@mv main.o src
	@mv check.o src
	@mv read.o src
	@mv pattern.o src
	@mv tab_to_lst.o src
	@mv move_tetri.o src
	@mv move_tetri2.o src
	@echo "Creating binary..."
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INC) $(LDFLAGS) $(LDLIBS)

clean:
	@echo "Cleaning objects..."
	@$(RM) $(OBJ)

fclean: clean
	@echo "Cleaning binary..."
	@$(RM) $(NAME)

re: fclean all
