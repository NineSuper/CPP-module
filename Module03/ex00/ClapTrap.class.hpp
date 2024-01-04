/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:50 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/04 13:53:12 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		std::string	_target;
		int		_energy;
		int		_attackDamage;
		int		_health;
		int		_died;

		ClapTrap(void);
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		getLife(void) const;
		void	setAttack(int amount);

		ClapTrap(std::string name);
		~ClapTrap(void);
};
