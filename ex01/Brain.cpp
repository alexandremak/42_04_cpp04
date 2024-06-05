/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:27:09 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 02:48:58 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << CYAN << "[BRAIN]: Default constructed called" << BRESET
		<< std::endl;
}

Brain::Brain(const Brain &otherBrain) {
	std::cout << CYAN << "[BRAIN]: Copy constructed called" << BRESET
		<< std::endl;
	*this = otherBrain;
}

Brain &Brain::operator=(const Brain &otherBrain) {
	std::cout << CYAN << "[BRAIN]: Coppy assignment constructed called"
		<< BRESET << std::endl;
	if (this != &otherBrain)
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = otherBrain.ideas[i];
		}
	return (*this); 
}

Brain::~Brain() {
	std::cout << CYAN << "[BRAIN]: Destructor called" << BRESET
		<< std::endl;
}
