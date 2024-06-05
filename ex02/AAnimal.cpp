/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:53:01 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 23:46:22 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("NotDefined") {
	std::cout << RED << "[AANIMAL]: Default constructed called" << RESET
		<< std::endl;
}

AAnimal::AAnimal(const AAnimal &otherAnimal) {
	std::cout << RED << "[AANIMAL]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherAnimal;
}

AAnimal &AAnimal::operator=(const AAnimal &otherAAnimal) {
	std::cout << RED << "[AANIMAL]: Copy assignment constructed called" << RESET
		<< std::endl;
	if (this != &otherAAnimal)
		this->_type = otherAAnimal._type;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << RED << "[AANIMAL]: Destructor called" << RESET
		<< std::endl;
}

const std::string	AAnimal::getType() const {
	std::cout << RED << "[AANIMAL]: getType() member function called" << RESET
		<< std::endl;
	return (this->_type);
}

void 	AAnimal::makeSound() const {
	std::cout << RED << "[AANIMAL]: makeSound() member function called" << RESET
		<< std::endl;
	std::cout << "* SOME KIND OF ANIMAL NOISE * " << std::endl;
}
