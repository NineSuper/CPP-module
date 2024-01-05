/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:01:23 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:53:26 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	FragTrap::_health = 100;
	ScavTrap::_energy = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "\x1B[35m";
	std::cout << "[Diamond  Constructor] " << this->_name << " ❤️ :" << this->_health;
	std::cout << " 🏀:" << this->_energy << " 🥊:" << this->_attackDamage;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\x1B[35m";
	std::cout << "[whoAmI] My name: " << this->_name << " | ClapTrap Name : " <<  ClapTrap::_name;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\x1B[35m";
	std::cout << "[Destructor  Diamond] " << this->_name;
	std::cout << "\033[0m";
	std::cout << std::endl;
}
