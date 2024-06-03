/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:56:43 by amak              #+#    #+#             */
/*   Updated: 2024/06/04 00:14:08 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &otherAnimal);
		Animal &operator=(const Animal &otherAnimal);
		~Animal();

		std::string	getType();
};

#endif
