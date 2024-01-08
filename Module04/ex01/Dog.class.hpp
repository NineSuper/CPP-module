/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:25:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 09:05:10 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
	private:
		Brain*	_Brain;
	public:
		void	makeSound() const;

		Dog();
		~Dog();
};

#endif
