/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:58:47 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:03:42 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*	Fonctions	*/

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed == false)
		throw(NotSigned());
	else if (this->_toexec < executor.getGrade())
		throw(GradeTooLowException());
	std::fstream	file;
	std::string		name = this->_target;
	file.open(name.c_str(), std::fstream::out);
	file << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";
	std::cout << executor.getName() << " executed " << this->_name << std::endl << std::endl;
	file.close();
}

/*	Constructor/Operator/Copy/Destructor	*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_target = cpy._target;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)  : AForm("ShrubberyCreation")
{
	*this = cpy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)  : AForm("ShrubberyCreation")
{
	this->_target = target + "_shrubbery";
	this->_tosigned = 145;
	this->_toexec = 137;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
