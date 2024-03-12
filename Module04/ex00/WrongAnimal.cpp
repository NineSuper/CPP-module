/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:26:40 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:28:00 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "[Constructor WrongAnimal] " << this->_type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[Destructor WrongAnimal] " << this->_type <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal noise*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
