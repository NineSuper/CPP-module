/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:10:44 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 10:16:50 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
    std::string _type;

    public:
    const std::string	&getType(void) const;
	void				setType(const std::string &type);

    Weapon(const std::string &name);
    Weapon(void);
    ~Weapon(void);
};

#endif