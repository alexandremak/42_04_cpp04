/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:46:51 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 21:39:12 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

const std::string GREEN = "\033[32m";

class Dog : public Animal {
	private:
		Brain *_brain;
	
	public:
		Dog();
		Dog(const Dog &otherDog);
		Dog &operator=(const Dog &otherDog);
		~Dog();

		void	makeSound() const;
};

#endif
