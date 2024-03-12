/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:25:30 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:48:25 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public Animal
{
	private:
		Brain*	_Brain;
	public:
		void	makeSound() const;

		Cat();
		~Cat();
};

#endif
