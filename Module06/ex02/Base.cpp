/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:53:34 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/06 14:39:25 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

A::A()
{
	this->_type = "A";
}

A::~A() {}


B::B()
{
	this->_type = "B";
}

B::~B() {}

C::C()
{
	this->_type = "C";
}

C::~C() {}

std::string	Base::getClass() const
{
	return (this->_type);
}

Base &Base::operator=(const Base &cpy)
{
	if (this != &cpy)
		this->_type = cpy._type;
	return (*this);
}

Base::Base(const Base &cpy)
{
	*this = cpy;
}

Base::Base() {}

Base::~Base() {}
