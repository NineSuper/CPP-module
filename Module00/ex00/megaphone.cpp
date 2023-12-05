/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:40:23 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/05 17:07:41 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupeur(char c)
{
	if (c >= 'a' && c <= 'z')
		std::cout << (char)(c - 32);
	else
		std::cout << c;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < argc)
	{
		int j = -1;
		while (argv[i][++j])
			ft_toupeur(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}