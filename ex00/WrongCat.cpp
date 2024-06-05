/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:02:54 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 01:02:02 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << MAGENTA << "[WRONGCAT]: Default constructed called" << WRESET
		<< std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &otherWrongCat) : WrongAnimal() {
	std::cout << MAGENTA << "[WRONGCAT]: Copy constructed called" << WRESET
		<< std::endl;
	*this = otherWrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &otherWrongCat) {
	std::cout << MAGENTA << "[WRONGCAT]: Copy assignment constructed called"
		<< WRESET << std::endl;
	if (this != &otherWrongCat)
		this->_type = otherWrongCat._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << MAGENTA << "[WRONGCAT]: Destructor called" << WRESET
		<< std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << MAGENTA << "[WRONGCAT]: makeSound() member function called"
	<< WRESET << std::endl;
	std::cout << "* WRONG MEOW WRONG MEOW *" << std::endl;
}
