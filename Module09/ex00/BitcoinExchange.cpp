/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:39:45 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/20 11:38:53 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	Bitcoin::printContainer() const
{
	std::map<std::string, float>::const_iterator	it = _container.begin();
	while (it != _container.end())
	{
		std::cout << it->first << " = " << it->second << "\n";
		it++;
	}
}

void	Bitcoin::addContainer(const std::string date, const float value)
{
	_container[date] = value;
}

void	Bitcoin::printData() const
{
	std::map<std::string, float>::const_iterator	it = _data.begin();
	while (it != _data.end())
	{
		std::cout << it->first << " = " << it->second << "\n";
		it++;
	}
}

float	Bitcoin::getData(std::string key) const
{
	std::map<std::string, float>::const_iterator	it = _data.begin();
	while (it != _data.end())
	{
		if (it->first == key)
			return (it->second);
		it++;
	}
	return (0);
}

void	Bitcoin::addData(const std::string date, const float value)
{
	_data[date] = value;
}

/*	Exception	*/

const char* Bitcoin::badFormat::what() const throw()
{
	return ("Error: bad input => ");
}

const char* Bitcoin::badNumbers::what() const throw()
{
	return ("Error: not a positive number.");
}

/*	Constructor/Operator/Copy/Desctructor	*/

Bitcoin::Bitcoin(const Bitcoin &cpy)
{
	*this = cpy;
}

Bitcoin &Bitcoin::operator=(const Bitcoin &cpy)
{
	if (this != &cpy)
	{
		_data = cpy._data;
		_container = cpy._container;
	}
	return (*this);
}

Bitcoin::Bitcoin() {}

Bitcoin::~Bitcoin() {}
