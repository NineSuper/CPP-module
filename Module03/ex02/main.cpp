/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:41:29 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main(void)
{
	std::cout << "\x1B[36m<status> \"Name\" [Life] [Energy] [Attack DMG]\033[0m" << std::endl << std::endl;
	ClapTrap	Google("Google");
	std::cout << std::endl;
	ScavTrap	Youtube("Youtube");
	std::cout << std::endl;
	FragTrap	Stadia("Stadia");
	std::cout << std::endl;

	Youtube.attack("Google");
	Google.takeDamage(20);
	Youtube.guardGate();
	Stadia.attack("Amazon");
	Google.takeDamage(0);
	Youtube.guardGate();
	Stadia.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
