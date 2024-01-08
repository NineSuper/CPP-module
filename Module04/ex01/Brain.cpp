/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:45:35 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 09:35:47 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
	std::cout << "[Brain Constructor]" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain Destructor]" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "[Brain operator]" << std::endl;
	if (this != &src)
		*this->_ideas = *src._ideas;
	return (*this);
}

Brain::Brain(const Brain &src)
{
	std::cout << "[Brain copy]" << std::endl;
	*this = src;
}
