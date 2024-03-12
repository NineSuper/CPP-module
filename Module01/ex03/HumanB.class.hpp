/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:58:35 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 11:30:45 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"

class HumanB
{
	private:
	std::string	_name;
	Weapon	*_weapon;

	public:
	void	attack(void) const;
	void	setWeapon(Weapon &arme);

	HumanB(std::string name);
	~HumanB(void);
};

#endif