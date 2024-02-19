/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:58:07 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/14 22:49:11 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int	i = -1;

	std::vector<int> v;
	while (++i < 10)
		v.push_back(i);
	try
	{
		easyfind(v, 5);
		easyfind(v, 0);
		easyfind(v, 13);
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}

