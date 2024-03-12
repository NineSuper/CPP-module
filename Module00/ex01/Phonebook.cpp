/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:49:30 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/06 23:38:13 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook(void)
{
	this->init_repertory();
	std::cout << "[Directory created]" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "[Directory destroyed]" << std::endl;
	return ;
}

void	Phonebook::init_repertory(void)
{
	int	i = -1;

	while (++i < 8)
	{
		this->_repertory[i].set_firstName("");
		this->_repertory[i].set_lastName("");
		this->_repertory[i].set_nickName("");
		this->_repertory[i].set_phoneNumber("");
		this->_repertory[i].set_secret("");
	}
}

std::string	ft_getline(const char *msg)
{
	std::string	str;

	std::cout << msg;
	while (!str[0] || str[0] == ' ' || str[0] == '\t')
	{
		std::getline(std::cin, str);
		if (!str[0] || str[0] == ' ')
			std::cout << "this couldn't be empty\n" << msg;
	}
	return (str);
}

void	Phonebook::add_contact(void)
{
	static int	i = 0;

	if (i == 8)
		i = 0;
	std::cout << std::endl;
	this->_repertory[i].set_firstName(ft_getline("First Name : "));
	this->_repertory[i].set_lastName(ft_getline("Last Name : "));
	this->_repertory[i].set_nickName(ft_getline("Nick Name : "));
	this->_repertory[i].set_phoneNumber(ft_getline("Phone Number : "));
	this->_repertory[i].set_secret(ft_getline("Darkest Secret : "));
	std::cout << std::endl << "The contact has been added to the list\n" << std::endl;
	i++;
}

void	ft_tab(std::string str)
{
	int	i = 0;
	int	j;

	if (str.length() >= 10)
	{
		str[9] = '.';
		while (str[i] && i < 10)
			std::cout << str[i++];
	}
	else
	{
		i = -1;
		j = str.length();
		while (++i + j < 10)
			std::cout << " ";
		std::cout << str;
	}
}

void	ft_getindex(const Contact repertory[8])
{
	std::string	str;
	int		good = 0;

	std::cout << "Which contact do you want to see?" << std::endl;
	while (!good)
	{
		std::getline(std::cin, str);
		if (!str[0] || str[0] == ' ' || str[0] == '\t')
			std::cout << "this couldn't be empty\n" << std::endl;
		else if (str[0] <= '0' || str[0] > '8' || str[1])
			std::cout << "The index must be between 1 and 8" << std::endl;
		else
			good = 1;
	}
	good = str[0] - 49;
	std::cout << std::endl;
	std::cout << "Firstname : " << repertory[good].get_firstName() << std::endl;
	std::cout << "Last Name : " << repertory[good].get_lastName() << std::endl;
	std::cout << "Nick Name : " << repertory[good].get_nickName() << std::endl;
	std::cout << "Phone Number : " << repertory[good].get_phoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << repertory[good].get_secret() << std::endl;
}

void	Phonebook::print_book(void) const
{
	int	i = -1;

	std::cout << "--------------------------------------------\n";
	while (++i < 8)
	{
		std::cout << "|        " << i + 1 << "|";
		ft_tab(this->_repertory[i].get_firstName());
		std::cout << "|";
		ft_tab(this->_repertory[i].get_lastName());
		std::cout << "|";
		ft_tab(this->_repertory[i].get_nickName());
		std::cout << "|\n";
		std::cout << "--------------------------------------------\n";
	}
	std::cout << std::endl;
	ft_getindex(this->_repertory);
	std::cout << std::endl;
}
