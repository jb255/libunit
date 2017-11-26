# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 20:06:41 by tmilon            #+#    #+#              #
#    Updated: 2017/11/26 12:13:12 by tmilon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testunit
HEADER = ../framework/
SRC = main.c ft_strlen.c strlen/00_launcher.c strlen/01_basic_test.c \
	  strlen/02_null_test.c strlen/03_bigger_str_test.c \
	  strlen/04_21_chars.c
OPTIONS = -Wall -Wextra -Werror -I $(HEADER) -L../libraries/ -lunit -lft
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) -o $(NAME) $(SRC)

test: re
	./$(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
