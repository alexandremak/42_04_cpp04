/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:02:54 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 23:12:12 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()){
	std::cout << BLUE << "[CAT]: Default constructed called" << RESET
		<< std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &otherCat) : Animal() {
	std::cout << BLUE << "[CAT]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherCat;
}

Cat &Cat::operator=(const Cat &otherCat) {
	std::cout << BLUE << "[CAT]: Copy assignment constructed called" << RESET
		<< std::endl;
	if (this != &otherCat) {
		this->_type = otherCat._type;
		delete _brain;
		this->_brain = new Brain(*otherCat._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << BLUE << "[CAT]: Destructor called" << RESET << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const {
	std::cout << BLUE << "[CAT]: makeSound() member function called" << RESET
		<< std::endl;
	std::cout << "* MEOW MEOW *" << std::endl;
}
