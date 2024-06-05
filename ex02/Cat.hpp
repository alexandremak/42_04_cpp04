/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:02:33 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 23:22:39 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

const std::string BLUE = "\033[34m";

class Cat : public AAnimal {
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat &otherCat);
		Cat &operator=(const Cat &otherCat);
		~Cat();

		void	makeSound() const;
};

#endif
