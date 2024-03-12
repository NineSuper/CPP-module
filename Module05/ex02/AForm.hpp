/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:57:22 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 13:45:44 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <fstream>

class	Bureaucrat;

class AForm
{
	protected:
		std::string	_name;
		std::string _target;
		bool		_signed;
		int			_tosigned;
		int			_toexec;

		AForm();
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
		class NotSigned : public std::exception
		{
			public:
				const char *what() const throw();
		};

		std::string		getName() const;
		int				getExec() const;
		bool			getSigned() const;
		void			beSigned(const Bureaucrat &Bureaucrat);
		virtual void	execute(const Bureaucrat &executor) const = 0;

		AForm &operator=(const AForm &cpy);
		AForm(const AForm &cpy);
		AForm(std::string name);
		~AForm();
};

std::ostream	&operator<<(std::ostream &obj, AForm const &a);

#endif
