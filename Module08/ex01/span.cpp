/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:35:51 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/15 13:54:57 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		span::shortestSpan()
{
	if (_container.empty())
		throw span::ContainerEmpty();
	else if (_container.size() == 1)
		throw span::ContainerEmpty();

	std::vector<int> copy = _container;

	std::sort(copy.begin(), copy.end(), std::less<int>());
	std::vector<int>::iterator it = copy.begin();
	int min = copy[1]  - copy[0];
	int	i = -1;
	int temp;
	while (it != copy.end())
	{
		i++;
		if (i > 1)
			temp = copy[i] - copy[i - 1];
		if (temp < min && i >= 2)
			min = temp;
		it++;
	}
	return (min);
}

int		span::longestSpan()
{
	if (_container.empty())
		throw span::ContainerEmpty();
	else if (_container.size() == 1)
		throw span::ContainerEmpty();
	std::vector<int> copy = _container;
	std::sort(copy.begin(), copy.end());
	int min = copy[0] - copy[_size - 1];
	return (abs(min));
}

void	span::addNumber(int nb)
{
	if (_container.size() >= _size)
		throw std::exception();
	_container.push_back(nb);
	std::cout << "[" << nb << "] add to the container" << std::endl;
}

void span::randomNumber()
{
	size_t	len = -1;

	srand(time(NULL));
	while (++len < _size)
		addNumber(rand() % 2048);
}

span::span(size_t size)
{
	_size = size;
}

span	&span::operator=(const span &cpy)
{
	if (this != &cpy)
	{
		_size = cpy._size;
		_container = cpy._container;
	}
	return (*this);
}

span::span(const span &cpy)
{
	*this = cpy;
}

span::span() : _size(0) {}

span::~span() {}
