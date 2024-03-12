/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:12:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 14:52:46 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	Humain("Bob");
	Bureaucrat	Humain2("Marcel");
	Form		Form("le testament de Jhonny");

	Humain.signForm(Form);
	while (Humain2.getGrade() > 20)
		Humain2.upGrade();
	Humain2.signForm(Form);
	Humain2.signForm(Form);
	std::cout << Form << std::endl;
	return (0);
}
