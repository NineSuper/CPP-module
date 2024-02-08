/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:11:03 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/06 14:26:40 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int	main(int argc, char **argv)
{

	if (argc != 2)
		return (std::cout << "./ScalarConverter 'input'" << std::endl, 0);
	ScalarConvert::convert(argv[1]);
	return (0);
}
