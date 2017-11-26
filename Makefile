# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 20:06:41 by tmilon            #+#    #+#              #
#    Updated: 2017/11/26 14:44:58 by tmilon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libraries/libunit.a
HEADER = framework/
SRC = framework/libunit.c framework/test_chain.c
OPTIONS = -o framework/ -c -Wall -Wextra -Werror -I $(HEADER)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

test: $(NAME)
	cd tests && make test

real-test: $(NAME)
	cd real-tests && make test

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
