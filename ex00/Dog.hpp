/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:46:51 by amak              #+#    #+#             */
/*   Updated: 2024/06/04 00:13:57 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

const std::string GREEN = "\033[32m";

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &otherDog);
		Dog &operator=(const Dog &otherDog);
		~Dog();

		void	makeSound();
};

#endif
