/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:55:16 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 23:48:09 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {	
	// AAnimal *animal = new AAnimal();
	
	Dog	*originalDog = new Dog();
  	Dog	copiedDog(*originalDog);

	const AAnimal *originalPtr = originalDog;
	
	originalPtr->makeSound();

	delete originalPtr;

	return 0;
}