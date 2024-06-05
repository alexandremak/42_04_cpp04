/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:52:49 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 23:31:40 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";

class AAnimal {
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(const AAnimal &otherAAnimal);
		AAnimal &operator=(const AAnimal &otherAAnimal);
		virtual ~AAnimal();

		const std::string	getType() const;
		virtual void 		makeSound() const = 0;
};

#endif
