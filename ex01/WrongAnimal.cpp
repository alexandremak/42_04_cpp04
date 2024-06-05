/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 00:44:45 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 01:01:42 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongNotDefined") {
	std::cout << YELLOW << "[WRONGANIMAL]: Default constructed called" << WRESET
		<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &otherWrongAnimal) {
	std::cout << YELLOW << "[WRONGANIMAL]: Copy constructed called" << WRESET
		<< std::endl;
	*this = otherWrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &otherWrongAnimal) {
	std::cout << YELLOW << "[WRONGANIMAL]: Copy assignment constructed called"
		<< WRESET << std::endl;
	if (this != &otherWrongAnimal)
		this->_type = otherWrongAnimal._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << YELLOW << "[WRONGANIMAL]: Destructor called" << WRESET
		<< std::endl;
}

const std::string	WrongAnimal::getType() const {
	std::cout << YELLOW << "[WRONGANIMAL]: getType() member function called"
		<< WRESET << std::endl;
	return (this->_type);
}

void 	WrongAnimal::makeSound() const {
	std::cout << YELLOW << "[WRONGANIMAL]: makeSound() member function called"
		<< WRESET << std::endl;
	std::cout << "* SOME KIND OF WRONGANIMAL NOISE * " << std::endl;
}
