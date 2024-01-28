/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:15:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 13:27:05 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>

class Form;

class Bureaucrat
{
	private:
		std::string	_name;
		int	_grade;

		Bureaucrat();
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		void	upGrade();
		void	downGrade();
		void	signForm(Form &form);

		std::string	getName() const;
		int			getGrade() const;


		Bureaucrat &operator=(const Bureaucrat &cpy);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat(std::string name);
		~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &obj, Bureaucrat const &a);

#endif
