/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:34 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/15 13:09:22 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(const float nb)
{
	this->_number = roundf(nb * (1 << this->_bits));
}

int	Fixed::toInt(void)const
{
	return (this->_number >> this->_bits);
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

float	Fixed::toFloat(void) const
{
	return ((float)this->_number / (float)(1 << this->_bits));
}

/*	Constructor/Operator/Copy/Destructor */

Fixed::Fixed(void)
{
	std::cout << "[Constructor Fixed]" << std::endl;
	_number = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << "[Int Fixed]" << std::endl;
	this->_number = nb << this->_bits;
}

std::ostream	&operator<<(std::ostream &obj, Fixed const &a)
{
	obj << a.toFloat();
	return (obj);
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
