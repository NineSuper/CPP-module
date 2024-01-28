/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:12:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:37:51 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Inter.hpp"

int	main()
{
    Inter  someRandomIntern;
    AForm*   rrf;

    rrf = someRandomIntern.makeForm("Robotomy", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;
	rrf = someRandomIntern.makeForm("Presidential", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;
	rrf = someRandomIntern.makeForm("Shruberry", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;
	rrf = someRandomIntern.makeForm("Fail", "Bender");
	return (0);
}
