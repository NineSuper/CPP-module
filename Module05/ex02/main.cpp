/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:12:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/28 14:06:54 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	Humain("Bob");
	Bureaucrat	Humain2("Marcel");
	ShrubberyCreationForm	Form("arbre");
	RobotomyRequestForm		Robot("Robot");
	PresidentialPardonForm	Pardon("Pardon dieu");

	try
	{
		Humain.signForm(Form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	while (Humain.getGrade() > 145)
		Humain.upGrade();
	try
	{
		Humain.signForm(Form);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form.execute(Humain2);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain2.getName() << " can't execute because " << e.what() << std::endl;
	}
	while (Humain.getGrade() > 137)
		Humain.upGrade();
	try
	{
		Form.execute(Humain);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	while (Humain.getGrade() > 47)
		Humain.upGrade();
	try
	{
		Robot.execute(Humain);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	try
	{
		Humain.signForm(Robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	while (Humain.getGrade() > 20)
		Humain.upGrade();
	try
	{
		Robot.execute(Humain);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	while (Humain.getGrade() > 1)
		Humain.upGrade();
	try
	{
		Pardon.execute(Humain);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	try
	{
		Humain.signForm(Pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	try
	{
		Pardon.execute(Humain);
	}
	catch(const std::exception& e)
	{
		std::cerr << Humain.getName() << " can't execute because " << e.what() << std::endl;
	}
	return (0);
}
