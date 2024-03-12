/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:59 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:40:06 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "\x1B[94m";
	std::cout << "[Constructor ClapTrap]";
	std::cout << "\033[0m";
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
	this->_died = 0;
	std::cout << "\x1B[94m";
	std::cout << "[Constructor ClapTrap] " << name << " ❤️ :" << this->_health;
	std::cout << " 🏀:" << this->_energy << " 🥊:" << this->_attackDamage;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\x1B[93m";
	std::cout << "[Destructor ClapTrap] ";
	if (this->_health <= 0)
		std::cout << this->_name << " 💀";
	else
		std::cout << this->_name << " ❤️ :" << this->_health;
	std::cout << "\033[0m";
	std::cout << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "\x1B[91m";
	std::cout << "[ClapTrap Attack] ";
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
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_died)
		return ;
	this->_health -= amount;
	std::cout << "\x1B[95m";
	if (this->_health <= 0)
	{
		std::cout << "[Fight] " << this->_name << " Died" << std::endl;
		this->_health = 0;
		this->_died = 1;
	}
	else
		std::cout << "[Fight] " << this->_name << " takes damage -" << amount << " | ❤️ :" << this->_health << std::endl;
	std::cout << "\033[0m";
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\x1B[92m";
	std::cout << "[Repair] ";
	if (!this->_energy)
		std::cout << this->_name << " has no more energy" << std::endl;
	else
	{
		this->_health += amount;
		std::cout << this->_name << " be repaired " << amount << " | ❤️ :" << this->_health << std::endl;
		this->_energy--;
	}
	std::cout << "\033[0m";
}
