# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 22:51:10 by amak              #+#    #+#              #
#    Updated: 2024/06/05 22:51:20 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	AAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \
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