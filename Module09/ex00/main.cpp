/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:35:11 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/20 11:41:53 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	addCSV_data(Bitcoin	&bitcoin)
{
	std::fstream		file("data.csv");
	std::string			date;
	std::string			str;
	std::string			nb;

	file >> date;
	while (file)
	{
		file >> date;
		str = date;
		str.erase(10);
		nb = date;
		nb.erase(0, 11);
		bitcoin.addData(str, atof(nb.c_str()));
	}
	file.close();
}

void	addInput_cont(Bitcoin &bitcoin, char *argv)
{
	std::fstream	file(argv);
	std::string		str;
	std::string		check;
	std::string		nb;

	getline(file, str);
	while (file)
	{
		getline(file, str);
		check = str;
		if (check.length() < 14 && str[0])
			std::cout << "Error: bad input => " << check << std::endl;
		else if (check.find('-', 13) == 13)
			std::cout << "Error: not a positive number\n";
		else if (str[0] && str.length() > 10)
		{
			check.erase(10);
			if (atof(str.c_str() + str.find('|') + 1) > 1000)
				std::cout << "Error: too large a number.\n";
			else
				std::cout << check << " => " << atof(str.c_str() + str.find('|') + 1) << " = " <<  atof(str.c_str() + str.find('|') + 1) * bitcoin.getData(check) << std::endl;
		}
	}
	file.close();
}

int	main(int argc, char **argv)
{
	Bitcoin		bitcoin;

	if (argc != 2 || !argv[1])
	{
		std::cout << "./btc <file.txt>" << std::endl;
		return (0);
	}

	std::fstream	file(argv[1]);

	if (!file)
	{
		std::cout << "Error: file not found" << std::endl;
		return (0);
	}

	addCSV_data(bitcoin);
	addInput_cont(bitcoin, argv[1]);
	file.close();
	return (0);
}

