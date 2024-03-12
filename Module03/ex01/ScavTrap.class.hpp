/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:00:01 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/04 22:21:42 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool	_gate;
	public:
		void	guardGate(void);
		void	attack(const std::string &target);

		ScavTrap(std::string name);
		~ScavTrap();
};

#endif
