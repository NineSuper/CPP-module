/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:58:07 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/15 13:55:37 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <unistd.h>

int main()
{
	span sp = span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(42);
		sp.addNumber(43);
	}
	catch (const std::exception &e)
	{
		std::cout << "Container full" << std::endl;
	}
	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;
	std::cout << "---RAND NUMBER---" << std::endl;
	span	random = span(100);

	sleep(7);
	random.randomNumber();
	std::cout << "---RAND NUMBER---" << std::endl;
	std::cout << "Longest : " << random.longestSpan() << std::endl;
	return 0;
}

