/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:26:32 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 09:05:31 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_Brain = new Brain;
	std::cout << "[Constructor Dog] " << this->_type << std::endl;
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << "[Destructor Dog] " << this->_type << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woaf Woaf" << std::endl;
}
