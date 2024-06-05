/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:09:41 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 02:48:45 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

const std::string BRESET = "\033[0m";
const std::string CYAN = "\033[36m";

class Brain {
	protected:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &otherBrain);
		Brain &operator=(const Brain &otherBrain);
		virtual ~Brain();
};

#endif
