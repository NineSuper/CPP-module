/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:12:12 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/25 09:31:04 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	captain("Sankeo");
	Bureaucrat	king("Pulseo");

	std::cout << captain;
	try
	{
		captain.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << captain << std::endl;
	/*		Test02		*/
	std::cout << king;
	while (king.getGrade() > 1)
		king.upGrade();
	try
	{
		king.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << king;
	return (0);
}
