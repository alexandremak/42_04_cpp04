/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 00:47:31 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 01:21:47 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

const std::string MAGENTA = "\033[35m";

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &otherWrongCat);
		WrongCat &operator=(const WrongCat &otherWrongCat);
		~WrongCat();

		void	makeSound() const;
};

#endif
