/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:34 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/16 13:42:07 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(const float nb)
{
	this->_number = roundf(nb * (1 << this->_bits));
}

int	Fixed::toInt()const
{
	return (this->_number >> this->_bits);
}

int	Fixed::getRawBits() const
{
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	_number = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_number / (float)(1 << this->_bits));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const	Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const	Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/*	Constructor/Operator/Copy/Destructor */

bool Fixed::operator>(const Fixed &src) const
{
	if (_number > src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &src) const
{
	if (_number < src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	if (_number >= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	if (_number <= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &src) const
{
	if (_number == src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	if (_number != src.getRawBits())
		return (true);
	return (false);
}

Fixed& Fixed::operator=(const Fixed &src)
{
	if (&src != this)
		this->_number = src._number;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &src) const
{
	Fixed	res;
	int	temp;

	temp = this->_number + src.getRawBits();
	res.setRawBits(temp / (1 << _bits));
	return (res);
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	Fixed	res;
	int	temp;

	temp = this->_number - src.getRawBits();
	res.setRawBits(temp / (1 << _bits));
	return (res);
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	Fixed	res;
	int	temp;

	temp = this->_number * src.getRawBits();
	res.setRawBits(temp / (1 << _bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	Fixed	res;
	int	temp;

	temp = this->_number / src.getRawBits();
	res.setRawBits(temp / (1 << _bits));
	return (res);
}

Fixed	&Fixed::operator++()
{
	this->_number++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_number--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed::Fixed(void)
{
	_number = 0;
}

Fixed::Fixed(const int nb)
{
	this->_number = nb << this->_bits;
}

std::ostream	&operator<<(std::ostream &obj, Fixed const &a)
{
	obj << a.toFloat();
	return (obj);
}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
}


Fixed::~Fixed(void)
{
}
