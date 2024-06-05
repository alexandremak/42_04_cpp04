/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:27:09 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 22:43:35 by amak             ###   ########.fr       */
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
	std::cout << CYAN << "[BRAIN]: Copy assignment constructed called"
		<< BRESET << std::endl;
	if (this != &otherBrain)
		for (int i = 0; i < NR_IDEIAS; i++) {
			this->ideas[i] = otherBrain.ideas[i];
		}
	return (*this); 
}

Brain::~Brain() {
	std::cout << CYAN << "[BRAIN]: Destructor called" << BRESET
		<< std::endl;
}
