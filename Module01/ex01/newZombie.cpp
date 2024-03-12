/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:53:47 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/12 11:32:37 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie*	Zombie::zombieHorde(int n, std::string name)
{
	Zombie*	horde = new Zombie[n];
	int	i = -1;
	
	while (++i < n)
		horde[i] = Zombie(name);
	return (&horde[0]);
}

Zombie*	Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
};