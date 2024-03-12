/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:17:29 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 09:31:57 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*	Fonctions	*/

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::upGrade()
{
	if (_grade == 1)
		throw(GradeTooHighException());
	_grade--;
}

void	Bureaucrat::downGrade()
{
	if (_grade == 150)
		throw(GradeTooLowException());
	_grade++;
}

/*	Exception	*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.\n");
}

/*	Constructor/Operator/Copy/Destructor */

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {}

std::ostream	&operator<<(std::ostream &obj, Bureaucrat const &a)
{
	obj << a.getName() << "'s grade is " << a.getGrade() << std::endl;
	return (obj);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
	std::cout << "[Bureaucrat Operator]" << std::endl;
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_grade = cpy._grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	std::cout << "[Bureaucrat Copy]" << std::endl;
	*this = cpy;
}

Bureaucrat::~Bureaucrat() {}
