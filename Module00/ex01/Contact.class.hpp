/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:26:35 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/06 23:38:23 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>

class	Contact {
	
	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_secret;

	public:
	std::string	get_firstName(void) const;
	std::string	get_lastName(void) const;
	std::string	get_nickName(void) const;
	std::string	get_phoneNumber(void) const;
	std::string	get_secret(void) const;

	void	set_firstName(std::string);
	void	set_lastName(std::string);
	void	set_nickName(std::string);
	void	set_phoneNumber(std::string);
	void	set_secret(std::string);

	Contact(void);
	~Contact(void);
};

#endif