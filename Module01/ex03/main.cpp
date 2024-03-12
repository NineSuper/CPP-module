/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:07:31 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 11:32:10 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

int main() {
    {
        Weapon	club = Weapon("Knife");
        HumanA	bob("Bob", club);

        bob.attack();
        club.setType("M4");
        bob.attack();
    }
    {
    	Weapon	club = Weapon("Glock 17");
     	HumanB	jim("Jim");
	
	 	jim.setWeapon(club);
		jim.attack();
		club.setType("Bat");
		jim.attack();
    }
	return (0);
}
