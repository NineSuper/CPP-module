/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:35:55 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 14:50:28 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private:
		std::string	_name;
		bool		_signed;
		int			_tosigned;
		int			_toexec;

		Form();
	public:
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class AlreadySigned : public std::exception
		{
			public:
				const char *what() const throw();
		};

		std::string	getName() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat &Bureaucrat);

		Form &operator=(const Form &cpy);
		Form(const Form &cpy);
		Form(std::string name);
		~Form();
};

std::ostream	&operator<<(std::ostream &obj, Form const &a);

#endif
