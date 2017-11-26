# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 20:06:41 by tmilon            #+#    #+#              #
#    Updated: 2017/11/26 20:10:09 by jaustry          ###   ########.fr        #
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
	  strtrim/04_blank_trim_test.c isalpha/00_launcher.c \
	  isalpha/01_basic_alpha_test.c isalpha/02_negative_alpha_test.c \
	  isalpha/03_high_alpha_test.c itoa/00_launcher.c \
	  itoa/01_basic_itoa_test.c itoa/02_neg_itoa_test.c \
	  itoa/03_max_itoa_test.c itoa/04_min_itoa_test.c strjoin/00_launcher.c \
	  strjoin/01_join_basic_test.c strjoin/02_join_second_empty_test.c \
	  strjoin/03_join_first_empty_test.c strjoin/04_join_both_empty_test.c \
	  strjoin/05_double_join_test.c strjoin/06_space_double_join_test.c
OPTIONS = -Wall -Wextra -Werror -I $(HEADER) -L../libraries/ -lunit -lft
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) -o $(NAME) $(SRC)

test: re
	./$(NAME) all

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
