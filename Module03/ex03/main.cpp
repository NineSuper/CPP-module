/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:55:22 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "DiamondTrap.class.hpp"

int	main(void)
{
	std::cout << "\x1B[36m<status> \"Name\" [Life] [Energy] [Attack DMG]\033[0m" << std::endl << std::endl;
	ClapTrap	Google("Google");
	std::cout << std::endl;
	ScavTrap	Youtube("Youtube");
	std::cout << std::endl;
	FragTrap	Stadia("Stadia");
	std::cout << std::endl;
	DiamondTrap	Twitch("Twitch");
	std::cout << std::endl << std::endl;

	Stadia.attack("Google");
	Twitch.attack("Netflix");
	Twitch.highFivesGuys();
	Twitch.guardGate();
	Twitch.beRepaired(5);
	Twitch.whoAmI();
	std::cout << std::endl << std::endl;
	return (0);
}
