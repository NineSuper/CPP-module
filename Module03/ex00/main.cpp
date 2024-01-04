/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/04 14:07:58 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

void	testOne(void)
{
	std::cout << "\t[Test One]" << std::endl << std::endl;
	ClapTrap	Ninho("Ninho");
	ClapTrap	Tupac("Tupac");
	ClapTrap	Damso("Damso");

	std::cout << std::endl;
	while (Ninho.getLife() && Damso.getLife() && Tupac.getLife())
	{
		Ninho.setAttack(2);
		Ninho.attack("Tupac");
		Tupac.takeDamage(2);
		Damso.setAttack(2);
		Damso.attack("Tupac");
		Tupac.takeDamage(2);
		Tupac.setAttack(5);
		Tupac.attack("Damso");
		Damso.takeDamage(5);
		Tupac.beRepaired(2);
		Damso.beRepaired(3);
		Ninho.beRepaired(3);
		Ninho.setAttack(7);
		Ninho.attack("Tupac");
		Tupac.takeDamage(7);
		Tupac.beRepaired(8);
		Tupac.setAttack(12);
		Tupac.attack("Ninho");
		Ninho.takeDamage(12);
		Damso.setAttack(4);
		Damso.attack("Ninho");
		Ninho.takeDamage(4);
	}
	std::cout << std::endl;
}

void	testTwo(void)
{
	std::cout << std::endl << "\t[Test Two]" << std::endl << std::endl;
	ClapTrap	Jul("Jul");
	ClapTrap	Naza("Naza");

	std::cout << std::endl;
	Jul.setAttack(9);
	Naza.setAttack(10);
	Jul.attack("Naza");
	Naza.takeDamage(9);
	while (Naza.getLife() < 10)
		Naza.beRepaired(1);
	Naza.attack("Jul");
	Jul.takeDamage(9);
	Naza.attack("Jul");
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "\x1B[36m<status> \"Name\" [Life] [Energy] [Attack DMG]\033[0m" << std::endl << std::endl;
	testOne();
	testTwo();
	return (0);
}
