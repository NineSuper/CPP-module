/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:59:59 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/04 19:53:13 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_energy = 50;
	this->_health = 100;
	this->_attackDamage = 20;
	std::cout << "\x1B[36m";
	std::cout << "[ScavTrap Constructor] " << this->_name << " ❤️ :" << this->_health;
	std::cout << " 🏀:" << this->_energy << " 🥊:" << this->_attackDamage;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "\x1B[36m";
	std::cout << "[ScavTrap Attack] ";
	this->_target = target;
	if (!this->_energy)
		std::cout << this->_name << " has no more energy" << std::endl;
	else
	{
		std::cout << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << " | ❤️ :" << this->_health << std::endl;
		this->_energy--;
	}
	std::cout << "\033[0m";
}

void	ScavTrap::guardGate()
{
	std::cout << "\x1B[36m";
	if (!this->_gate)
		this->_gate = true;
	else
		this->_gate = false;
	std::cout << "[" << this->_name << "] Gate Mode: " << this->_gate << std::endl;
	std::cout << "\033[0m";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\x1B[36m";
	std::cout << "[Destructor ScavTrap]";
	std::cout << "\033[0m";
	std::cout << std::endl;
}
