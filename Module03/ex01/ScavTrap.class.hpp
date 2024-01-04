/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:00:01 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/04 15:45:16 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

class ScavTrap: public ClapTrap
{
	private:
		int	_gate;
	public:
		void	guardGate(void);
		void	attack(const std::string &target);

		ScavTrap(std::string name);
		~ScavTrap();
};
