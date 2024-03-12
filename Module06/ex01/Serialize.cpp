/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:41:56 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/01 03:08:41 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Data*		Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t	Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serialize	&Serialize::operator=(const Serialize &cpy)
{
	if (this != &cpy)
		this->_ptr = cpy._ptr;
	return (*this);
}

Serialize::Serialize(const Serialize &cpy)
{
	*this = cpy;
}

Serialize::Serialize() {}

Serialize::~Serialize() {}
