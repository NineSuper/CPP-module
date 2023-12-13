/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:29:27 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 11:00:29 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "Weapon.class.hpp"

class HumanA
{
    private:
    std::string	_name;
	Weapon	&_weapon;

    public:
	void	attack(void) const;

    HumanA(std::string name, Weapon &arme);
    ~HumanA(void);
};

#endif