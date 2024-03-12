/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:15:59 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 12:21:24 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "\x1B[33m";
	std::cout << "[FragTrap Constructor] " << this->_name << " ❤️ :" << this->_health;
	std::cout << " 🏀:" << this->_energy << " 🥊:" << this->_attackDamage;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\x1B[33m";
	std::cout << "[FragTrap] " << this->_name << " High Fives" << std::endl;
	std::cout << "\033[0m";
}

FragTrap::~FragTrap()
{
	std::cout << "\x1B[33m";
	std::cout << "[Destructor FragTrap]";
	std::cout << "\033[0m";
	std::cout << std::endl;
}
