/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:36:04 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 14:51:49 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*	Fonctions	*/

void	Form::beSigned(const Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > _tosigned)
		throw(GradeTooLowException());
	if (_signed == true)
		throw(AlreadySigned());
	_signed = true;
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_signed);
}

/*	Exceptions	*/

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade too low\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade too high\n");
}

const char* Form::AlreadySigned::what() const throw()
{
	return ("is already signed\n");
}

/*	Constructor/Operator/Copy/Destructor	*/

Form&	Form::operator=(const Form &cpy)
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

Form::Form(const Form &cpy)
{
	*this = cpy;
}

std::ostream	&operator<<(std::ostream &obj, Form const &a)
{
	obj << "[" << a.getName() << "] signed: " << a.getSigned() << std::endl;
	return (obj);
}


Form::Form(std::string name) : _name(name), _signed(false), _tosigned(20) {}

Form::Form() {}

Form::~Form() {}
