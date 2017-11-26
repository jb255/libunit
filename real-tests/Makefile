# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 20:06:41 by tmilon            #+#    #+#              #
#    Updated: 2017/11/26 15:35:51 by tmilon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testunit
HEADER = ../framework/
SRC = main.c ft_strlen.c ft_strcmp.c strlen/00_launcher.c \
	  strlen/01_basic_test.c \
	  strlen/02_null_test.c strlen/03_bigger_str_test.c \
	  strlen/04_21_chars.c atoi/00_launcher.c atoi/01_base_test.c \
	  atoi/02_max_int_test.c atoi/03_min_int_test.c atoi/04_blank_test.c \
	  atoi/05_zeroline_test.c atoi/06_plus_test.c atoi/07_char_after_test.c \
	  atoi/08_giant_number_test.c atoi/09_no_number_test.c \
	  strtrim/00_launcher.c strtrim/01_basic_trim_test.c \
	  strtrim/02_advanced_trim_test.c strtrim/03_no_trim_test.c \
	  strtrim/04_blank_trim_test.c
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
