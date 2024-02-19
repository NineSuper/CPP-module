/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:26:09 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/12 14:26:37 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char>	string(5);
	Array<int>	numbers(25);
	int			i = -1;

	string[0] = 'H';
	string[1] = 'E';
	string[2] = 'L';
	string[3] = 'L';
	string[4] = 'O';
	srand(time(NULL));
	while (++i < 25)
		numbers[i] = rand() % 50;

	i = -1;
	try
	{
		string[-1] = 'A';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[26] = 9;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	i = -1;
	while (++i < (int)string.len())
		std::cout << "[" << string[i] << "]";
	std::cout << std::endl;
	i = -1;
	while (++i < (int)numbers.len())
		std::cout << "[" << numbers[i] << "] ";
	return (0);
}
