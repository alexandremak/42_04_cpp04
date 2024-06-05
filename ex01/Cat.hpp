/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:02:33 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 00:33:05 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

const std::string BLUE = "\033[34m";

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &otherCat);
		Cat &operator=(const Cat &otherCat);
		~Cat();

		void	makeSound() const;
};

#endif
