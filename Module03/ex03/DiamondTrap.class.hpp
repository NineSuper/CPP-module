/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:01:11 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/05 14:23:56 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		using ScavTrap::attack;
		void	whoAmI(void);

		DiamondTrap(std::string nname);
		~DiamondTrap();
};

#endif
