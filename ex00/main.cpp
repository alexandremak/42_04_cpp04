/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:17:48 by amak              #+#    #+#             */
/*   Updated: 2024/06/06 21:01:59 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << "---------------------- " << std::endl;

	const	WrongAnimal* nova = new WrongAnimal();
	const	WrongAnimal* k = new WrongCat();
	const	WrongCat* l = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;

	nova->makeSound();
	k->makeSound();
	std::cout << "NOTE: output of WrongAnimal makeSound() member function"
		<< std::endl;
	l->makeSound();

	delete nova;
	delete k;
	std::cout << "NOTE: didn't call the WrongCat destructor" << std::endl;
	delete l;

	return 0;
}
