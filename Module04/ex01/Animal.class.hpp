/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:18:21 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:59:53 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		std::string 	getType() const;
		virtual void	makeSound() const;

		Animal();
		virtual ~Animal();

		Animal&	operator=(const Animal& src);
		Animal(const Animal& src);
};

#endif
