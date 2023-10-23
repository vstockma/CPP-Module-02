# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 15:40:14 by vstockma          #+#    #+#              #
#    Updated: 2023/10/23 10:27:05 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canon

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RM = rm -f

CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re