/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:18:03 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 15:32:14 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
#include <iostream>

class	Zombie {

	private:
	std::string _name;
	
	public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void	annonce(void) const;
	void randomChump(std::string name);
	Zombie*	newZombie(std::string name);
};

#endif