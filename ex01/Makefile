# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 02:06:10 by amak              #+#    #+#              #
#    Updated: 2024/06/05 02:09:16 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = IDoNotWanToSetTheWorldOnFire

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	Animal.cpp \
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