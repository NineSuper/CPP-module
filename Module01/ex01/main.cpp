/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:14:46 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 16:45:38 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"

int	main()
{
	int	nb = 10;
	int	i = -1;
	Zombie	*Hordes = Hordes->zombieHorde(nb, "Zombie");

	std::cout << "\n-----------" << std::endl << std::endl;
	std::cout << "pointer to the first zombie :" << std::endl;
	Hordes->annonce();
	Hordes[0].annonce();
	std::cout << "\nother zombies :" << std::endl;
	Hordes[1].annonce();
	Hordes[2].annonce();
	std::cout << "\n-----------" << std::endl << std::endl;
	delete [] Hordes;
	return (0);
}
