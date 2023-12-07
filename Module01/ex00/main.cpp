/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:14:46 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 15:38:11 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"

int	main()
{
	Zombie	*Albert;
	Zombie	Einstein;
	Zombie	Tom("Tom");

	Albert = Albert->newZombie("Albert");
	Albert->annonce();
	Einstein.randomChump("Einstein");
	Einstein.annonce();
	Tom.annonce();
	delete Albert;
	return (0);
}
