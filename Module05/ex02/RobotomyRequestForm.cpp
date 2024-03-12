/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:11 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:03:58 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

/*	Fonctions	*/

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	int randNum = std::rand();

	if (this->_signed == false)
		throw(NotSigned());
	if (this->_toexec < executor.getGrade())
		throw(GradeTooLowException());
	std::cout << executor.getName() << " executed " << this->_name << std::endl << std::endl;
	if (randNum % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized!\n" << std::endl;
	}
	else
	{
		std::cout << "Robotomy of " << this->_target << " failed!\n" << std::endl;
	}
}

/*	Constructor/Operator/Copy/Destructor	*/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_target = cpy._target;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)  : AForm("RobotomyRequest")
{
	*this = cpy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)  : AForm("RobotomyRequest")
{
	this->_target = target + "_robotomized";
	this->_tosigned = 72;
	this->_toexec = 45;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
