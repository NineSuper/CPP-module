/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:12:52 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 09:27:32 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	Animal*	tab[10];
	int	i = -1;
	std::cout << "\t[Constructor] Animal[10]" << std::endl << std::endl;
	while (++i < 10)
	{
		if (i < 5)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		std::cout << std::endl;
	}
	i = -1;
	std::cout << "\t[Destructor]" << std::endl << std::endl;
	while (++i < 10)
	{
		delete tab[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
