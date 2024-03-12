/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:29:22 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/21 14:05:39 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	rn;

	if (argc != 2)
	{
		std::cout << "Error\n";
		return (1);
	}
	rn.calculate(argv[1]);
}
