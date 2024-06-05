# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 22:54:27 by amak              #+#    #+#              #
#    Updated: 2024/06/05 01:04:11 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			main.cpp
			
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	
clean:
	@rm -f $(OBJECTS)
	@echo Deleted object files!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted executable!

re: fclean all

.PHONY: all bonus clean fclean re