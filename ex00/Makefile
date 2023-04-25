# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 15:40:14 by vstockma          #+#    #+#              #
#    Updated: 2023/04/24 15:44:08 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canon

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

FLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re