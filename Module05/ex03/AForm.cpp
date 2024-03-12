/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:57:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:07:51 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*	Fonctions	*/

void	AForm::beSigned(const Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > _tosigned)
		throw(GradeTooLowException());
	if (_signed == true)
		throw(AlreadySigned());
	_signed = true;
}

int	AForm::getExec() const
{
	return (_toexec);
}

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

/*	Exceptions	*/

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low\n");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high\n");
}

const char* AForm::AlreadySigned::what() const throw()
{
	return ("is already signed\n");
}

const char* AForm::NotSigned::what() const throw()
{
	return ("is not signed\n");
}

/*	Constructor/Operator/Copy/Destructor	*/

AForm&	AForm::operator=(const AForm &cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_signed = cpy._signed;
		this->_toexec = cpy._toexec;
		this->_tosigned = cpy._tosigned;
	}
	return (*this);
}

AForm::AForm(const AForm &cpy)
{
	*this = cpy;
}

std::ostream	&operator<<(std::ostream &obj, AForm const &a)
{
	obj << "[" << a.getName() << "] signed: " << a.getSigned() << std::endl;
	return (obj);
}


AForm::AForm(std::string name) : _name(name), _signed(false), _tosigned(20) {}

AForm::AForm() {}

AForm::~AForm() {}
