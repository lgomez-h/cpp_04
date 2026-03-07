# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 17:19:35 by lgomez-h          #+#    #+#              #
#    Updated: 2025/06/22 10:12:03 by lgomez-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		MateriaSource.cpp \
		Ground.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re