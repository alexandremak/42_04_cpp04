/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:56:43 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 03:15:19 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &otherAnimal);
		Animal &operator=(const Animal &otherAnimal);
		virtual ~Animal();

		const std::string	getType() const;
		virtual void 		makeSound() const;
};

#endif
