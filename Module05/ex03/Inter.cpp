/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inter.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:15:19 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:34:18 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inter.hpp"

AForm	*Inter::makeForm(const std::string &name, const std::string &target)
{
	int	i = -1;
	std::string	list[3] = {"Shruberry", "Robotomy", "Presidential"};

	while (++i < 3)
		if (list[i] == name)
			break ;
	switch (i)
	{
		case 0:
		{
			return (new ShrubberyCreationForm(target));
			break ;
		}
		case 1:
		{
			return (new RobotomyRequestForm(target));
			break ;
		}
		case 2:
		{
			return (new PresidentialPardonForm(target));
			break ;
		}
		default:
		{
			std::cout << "Form " << name << " doesn't exist." << std::endl;
			return (NULL);
		}
	}
	return (NULL);
}

Inter::Inter() {}

Inter::~Inter() {}
