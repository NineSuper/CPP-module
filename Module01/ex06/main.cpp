/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:40:58 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/14 17:10:32 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main(int argc, char **argv)
{
	Harl	filter;

	if (argc != 2)
		return (std::cout << "./HarlFilter <levels warning>" << std::endl, 0);
	else
	{
		std::string	str(argv[1]);
		filter.complain(str);
	}
	return (0);
}
