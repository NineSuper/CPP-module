/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:26:38 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/06 15:57:29 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void) 
{
	return ;
}

Contact::~Contact(void) 
{
	return ;
}

void	Contact::set_firstName(std::string s)
{
	this->_firstName = s;
}

void	Contact::set_lastName(std::string s)
{
	this->_lastName = s;
}

void	Contact::set_nickName(std::string s)
{
	this->_nickName = s;
}

void	Contact::set_phoneNumber(std::string s)
{
	this->_phoneNumber = s;
}

void	Contact::set_secret(std::string s)
{
	this->_secret = s;
}

std::string	Contact::get_firstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::get_lastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::get_nickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::get_phoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}
