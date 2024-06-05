/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:50:09 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 21:35:37 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << GREEN << "[DOG]: Default constructed called" << RESET
		<< std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &otherDog) : Animal() {
	std::cout << GREEN << "[DOG]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherDog;
}

Dog &Dog::operator=(const Dog &otherDog) {
	std::cout << GREEN << "[DOG]: Copy assignment constructed called" << RESET
		<< std::endl;
	if (this != &otherDog)
		this->_type = otherDog._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << GREEN << "[DOG]: Destructor called" << RESET << std::endl;
}

void	Dog::makeSound() const {
	std::cout << GREEN << "[DOG]: makeSound() member function called" << RESET
		<< std::endl;
	std::cout << "* WOOF WOOF *" << std::endl;
}
