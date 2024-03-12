/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:31:54 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/20 19:36:02 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	RPN::calculate(char *str)
{
	int	i = -1;
	int	nb;
	int	temp_a;
	int temp_b;

	while (++i < (int)strlen(str))
	{
		if (str[i] == ' ')
			i++;
		if (isdigit(str[i]))
		{
			nb = str[i] - 48;
			_container.push(nb);
		}
		else if (str[i] == '+' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b + temp_a);
		}
		else if (str[i] == '-' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b - temp_a);
		}
		else if (str[i] == '/' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b / temp_a);
		}
		else if (str[i] == '*' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b * temp_a);
		}
		else
		{
			std::cout << "Error";
			return ;
		}
	}
	if (_container.size() == 1)
	{
		temp_a = _container.top();
		_container.pop();
		std::cout << temp_a << std::endl;
	}
	else
		std::cout << "Invalid input." << std::endl;
}

/*	Constructor/Operator/Copy/Destructor	*/

RPN	&RPN::operator=(const RPN &cpy)
{
	if (this != &cpy)
	{
		_container = cpy._container;
	}
	return (*this);
}

RPN::RPN(const RPN &cpy)
{
	*this = cpy;
}

RPN::RPN() {}

RPN::~RPN() {}
