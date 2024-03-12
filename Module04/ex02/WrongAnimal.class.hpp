/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:25:44 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:28:34 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		std::string 	getType() const;
		void	makeSound() const;

		WrongAnimal();
		~WrongAnimal();

		WrongAnimal&	operator=(const WrongAnimal& src);
		WrongAnimal(const WrongAnimal& src);
};

#endif
