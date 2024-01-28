/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:15:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 14:56:10 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>

class AForm;

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
		void	signForm(AForm &form);

		std::string	getName() const;
		int			getGrade() const;


		Bureaucrat &operator=(const Bureaucrat &cpy);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat(std::string name);
		~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &obj, Bureaucrat const &a);

#endif
