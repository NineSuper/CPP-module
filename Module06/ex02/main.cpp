/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:52:02 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/08 08:32:02 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "is A class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "is B class" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "is C class" << std::endl;
	else
		std::cout << "unknown class" << std::endl;
}

static void identify(Base& p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "is A class" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "is B class" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "is C class" << std::endl;
	else
		std::cout << "unknown class" << std::endl;
}

static Base*	generate()
{
	switch (std::rand() % 3 + 1)
	{
		case 1:
			return (new A());
			break;
		case 2:
			return (new B());
			break;
		case 3:
			return (new C());
			break;
		default:
			return (new A());
			break;
	}
}

int	main()
{
	srand(time(NULL));
	Base	*random = generate();
	Base	*other = generate();
	Base	*last = generate();

	identify(random);
	identify(other);
	identify(*last);
	delete random;
	delete other;
	delete last;
	return (0);
}
