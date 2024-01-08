/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:18:33 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/07 21:09:52 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "[Constructor Animal] " << this->_type << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Destructor Animal] " << this->_type <<  std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "*...*" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
