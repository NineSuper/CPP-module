/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:34 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/15 09:55:01 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "[Constructor Fixed]" << std::endl;
	_number = 0;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	_number = raw;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout <<  "[Operator Fixed]" << std::endl;
	if (&src != this)
		this->_number = src._number;
	return (*this);
}

Fixed::Fixed(const Fixed& src)
{
	std::cout <<  "[Copy Fixed]" << std::endl;
	*this = src;
}


Fixed::~Fixed(void)
{
	std::cout << "[Destructor Fixed]" << std::endl;
}
