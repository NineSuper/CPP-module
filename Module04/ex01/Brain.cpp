/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:45:35 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:56:09 by tde-los-         ###   ########.fr       */
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
	return (*this);
}

Brain::Brain(const Brain &src)
{
	std::cout << "[Brain copy]" << std::endl;
	*this = src;
}
