/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:42 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:07:23 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*	Fonctions	*/

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed == false)
		throw(NotSigned());
	if (this->_toexec < executor.getGrade())
		throw(GradeTooLowException());
	std::cout << executor.getName() << " executed " << this->_name << std::endl << std::endl;
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*	Constructor/Operator/Copy/Destructor	*/

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_target = cpy._target;
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)  : AForm("PresidentialPardon")
{
	*this = cpy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : AForm("PresidentialPardon")
{
	this->_target = target + "_robotomized";
	this->_tosigned = 25;
	this->_toexec = 5;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
