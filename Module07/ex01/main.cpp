/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:26:09 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/12 11:52:54 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char tab[] = {'a', 'B', 'c', 'D'};

	std::cout << "Original:" <<
	"\n\ta[0]: " << tab[0] <<
	"\n\ta[1]: " << tab[1] <<
	"\n\ta[2]: " << tab[2] <<
	"\n\ta[2]: " << tab[3] <<
	std::endl << std::endl;

	::iter(tab, sizeof(tab) / sizeof(char), ft_tolower);

	std::cout << "To lower:" <<
	"\n\ta[0]: " << tab[0] <<
	"\n\ta[1]: " << tab[1] <<
	"\n\ta[2]: " << tab[2] <<
	"\n\ta[2]: " << tab[3] <<
	std::endl << std::endl;

	::iter(tab, sizeof(tab) / sizeof(char), ft_toupper);

	std::cout << "To Upper:" <<
	"\n\ta[0]: " << tab[0] <<
	"\n\ta[1]: " << tab[1] <<
	"\n\ta[2]: " << tab[2] <<
	"\n\ta[2]: " << tab[3] <<
	std::endl << std::endl;

	::iter(tab, 3, ft_tolower);

	std::cout << "Min tab[0] -> tab[2]" <<
	"\n\ta[0]: " << tab[0] <<
	"\n\ta[1]: " << tab[1] <<
	"\n\ta[2]: " << tab[2] <<
	"\n\ta[2]: " << tab[3] <<
	std::endl << std::endl;
}
