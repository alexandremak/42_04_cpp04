/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:55:16 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 22:44:41 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal	*animals[8];

	for(int i = 0; i < 8; i++){
		if (i < 4)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(int i = 0; i < 8; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << "------------------" << std::endl;

  	Dog	*originalDog = new Dog();
  	Dog	copiedDog(*originalDog);

	const Dog *originalPtr = originalDog;
	
	originalPtr->makeSound();

	delete originalPtr;

	return 0;
}