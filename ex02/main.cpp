/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:55:16 by amak              #+#    #+#             */
/*   Updated: 2024/06/06 21:53:02 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {	
	// AAnimal animal;
	// AAnimal *animalPtr = new AAnimal();

	{	
		std::cout << std::endl << "--------- DOG ---------" << std::endl;

		Dog	*originalDog = new Dog();

		Dog	copiedDog(*originalDog);

		const Dog *ptrDog = originalDog;

		ptrDog->makeSound();

		delete ptrDog;
	}

	{
		std::cout << std::endl << "--------- CAT ---------" << std::endl;

		Cat	*originalCat = new Cat();

		Cat	copiedCat(*originalCat);

		const Cat *ptrCat = originalCat;
		
		ptrCat->makeSound();

		delete ptrCat;
	}

	return 0;
}
