/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:16:38 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 10:41:26 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

const	std::string &Weapon::getType(void) const
{
    return (this->_type);
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}

Weapon::Weapon(const std::string &name)
{
	this->_type = name;
}

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}