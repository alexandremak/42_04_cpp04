/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 00:40:54 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 00:43:10 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string> 

const std::string WRESET = "\033[0m";
const std::string YELLOW = "\033[33m";

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &otherWrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &otherWrongAnimal);
		//virtual ~WrongAnimal();
		~WrongAnimal();

		const std::string	getType() const;
		//virtual void 		makeSound() const;
		void 		makeSound() const;
};

#endif
