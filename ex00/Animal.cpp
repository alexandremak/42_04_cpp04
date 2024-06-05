/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:38:08 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 00:32:35 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("NotDefined") {
	std::cout << RED << "[ANIMAL]: Default constructed called" << RESET
		<< std::endl;
}

Animal::Animal(const Animal &otherAnimal) {
	std::cout << RED << "[ANIMAL]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherAnimal;
}

Animal &Animal::operator=(const Animal &otherAnimal) {
	std::cout << RED << "[ANIMAL]: Copy assignment constructed called" << RESET
		<< std::endl;
	if (this != &otherAnimal)
		this->_type = otherAnimal._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << RED << "[ANIMAL]: Destructor called" << RESET
		<< std::endl;
}

const std::string	Animal::getType() const {
	std::cout << RED << "[ANIMAL]: getType() member function called" << RESET
		<< std::endl;
	return (this->_type);
}

void 	Animal::makeSound() const {
	std::cout << RED << "[ANIMAL]: makeSound() member function called" << RESET
		<< std::endl;
	std::cout << "* SOME KIND OF ANIMAL NOISE * " << std::endl;
}
