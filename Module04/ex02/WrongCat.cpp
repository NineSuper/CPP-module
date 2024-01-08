/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:28:56 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:31:25 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "[Constructor WrongCat] " << this->_type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[Destructor WrongCat] " << this->_type << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
