/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:18:29 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 12:35:02 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << _annonce() << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _annonce() << " 💀" << std::endl;
	return ;
}

std::string Zombie::_annonce(void) const
{
	return (this->_name);
}