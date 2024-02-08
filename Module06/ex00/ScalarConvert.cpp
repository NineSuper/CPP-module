/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:17:23 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/31 04:51:52 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int		ft_check_arg(const char *str)
{
	int	i = -1;

	while (str[++i])
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-')
			return (1);
	return (0);
}

void	ScalarConvert::convert(std::string input)
{
	t_numbers	num;

	num.input = input;
	if (input.length() == 1)
	{
		num.c = input[0];
		if (num.c >= '0' && num.c <= '9')
		{
			num.i = atoi(input.c_str());
			isInt(&num);
		}
		else
			isChar(&num);
	}
	else if (!ft_check_arg(input.c_str()))
	{
		if (input.find_last_of('f') == input.length() - 1 && input.find_last_of('.') == input.length() - 3)
		{
			num.f = atof(input.c_str());
			isFloat(&num);
		}
		else if (input.find_last_of('.') == input.length() - 2)
		{
			num.d = atof(input.c_str());
			isDouble(&num);
		}
		else
		{
			num.i = atoi(input.c_str());
			isInt(&num);
		}
	}
	else
		std::cout << "error" << std::endl;
}

void	ScalarConvert::isInt(t_numbers *num)
{
	if (num->i < 0 || num->i > 127)
		std::cout << "char: Impossible\n";
	else if (num->i < 32 || num->i > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(num->i) << "'" << std::endl;
	std::cout << "int: " << num->i << std::endl;
	std::cout << "float: " << static_cast<float>(num->i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num->i) << ".0" << std::endl;
}

void	ScalarConvert::isChar(t_numbers *num)
{
	std::cout << "char: '" << num->c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(num->c) << std::endl;
	std::cout << "float: " << static_cast<float>(num->c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num->c) << ".0" << std::endl;
}

void	ScalarConvert::isFloat(t_numbers *num)
{
	num->i = static_cast<int>(num->f);
	if (num->i < 0 || num->i > 127)
		std::cout << "char: Impossible\n";
	else if (num->i < 32 || num->i > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(num->i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(num->f) << std::endl;
	std::cout << "float: " << num->f << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(num->f) << std::endl;
}

void	ScalarConvert::isDouble(t_numbers *num)
{
	num->i = static_cast<int>(num->d);
	if (num->i < 0 || num->i > 127)
		std::cout << "char: Impossible\n";
	else if (num->i < 32 || num->i > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(num->i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(num->d) << std::endl;
	std::cout << "float: " << static_cast<double>(num->d) << 'f' << std::endl;
	std::cout << "double: " << num->d << std::endl;
}

ScalarConvert::ScalarConvert() {}

ScalarConvert::~ScalarConvert() {}
