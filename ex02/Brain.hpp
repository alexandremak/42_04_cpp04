/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:09:41 by amak              #+#    #+#             */
/*   Updated: 2024/06/05 21:39:40 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define NR_IDEIAS 100

const std::string BRESET = "\033[0m";
const std::string CYAN = "\033[36m";

class Brain {
	protected:
		std::string ideas[NR_IDEIAS];

	public:
		Brain();
		Brain(const Brain &otherBrain);
		Brain &operator=(const Brain &otherBrain);
		virtual ~Brain();
};

#endif
