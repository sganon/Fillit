# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 20:27:43 by sganon            #+#    #+#              #
#    Updated: 2015/12/04 13:51:33 by sganon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

LDFLAGS=-L./libft/

LDLIBS=-lft

HDDIRS=-I./inc

SRC=main.c read.c

SRCDIR=src/

OBJ=main.o read.o

OBJDIR=obj/

SRC_LIST=$(addprefix $(SRCDIR), $(SRC))

OBJ_LIST=$(addprefix $(OBJDIR), $(OBJ))

$(NAME): 
		@echo "Compiling sources.."
		@$(CC) $(CFLAGS) -c $(SRC_LIST) $(HDDIRS)
		@echo "Moving objects..."
		@mv $(OBJ) $(OBJDIR)
		@echo "Compiling objects..."
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJ_LIST) $(HDDIRS) $(LDFLAGS) $(LDLIBS)

all: $(NAME)

clean:
		@echo "Cleaning objects..."
		@$(RM) $(OBJ_LIST)

fclean: clean
		@echo "Cleaning binary..."
		@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all 

