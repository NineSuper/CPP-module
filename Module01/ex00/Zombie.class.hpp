/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:18:03 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 12:32:17 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
#include <iostream>

/*
?	Zombie s'annonce lui même avec :
*	*Zombie newZombie(std::string nom) (fichier newZombie.cpp)
*	"<name> BraiiiiiiinnnzzzZ..."
*/

class	Zombie {
	private:
	std::string _name;
	std::string	_annonce(void) const;
	

	public:
	Zombie(void);
	~Zombie(void);
};



#endif