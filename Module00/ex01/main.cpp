/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:12:48 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/07 09:53:50 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

int	main(void)
{
    Phonebook	repertory;
	std::string	str;

	std::cout << std::endl;
	std::getline(std::cin, str);
	while (str != "exit" && str != "EXIT")
	{
		if (str == "SEARCH" || str == "search")
			repertory.print_book();
		if (str == "ADD" || str == "add")
			repertory.add_contact();
		std::getline(std::cin, str);
	}
    return (0);
}