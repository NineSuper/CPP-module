/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:26:32 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/07 20:55:28 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "[Constructor Cat] " << this->_type << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Destructor Cat] " << this->_type << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
