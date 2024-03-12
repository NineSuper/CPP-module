/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:41:36 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

int	main(void)
{
	std::cout << "\x1B[36m<status> \"Name\" [Life] [Energy] [Attack DMG]\033[0m" << std::endl << std::endl;
	ClapTrap	Google("Google");
	std::cout << std::endl;
	ClapTrap	Stadia("Stadia");
	std::cout << std::endl;
	ScavTrap	Youtube("Youtube");
	std::cout << std::endl;

	Youtube.attack("Google");
	Google.takeDamage(20);
	Youtube.guardGate();
	Stadia.attack("Youtube");
	Youtube.takeDamage(0);
	Youtube.beRepaired(1);
	Youtube.guardGate();
	std::cout << std::endl;
	return (0);
}
