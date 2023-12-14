/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:40:58 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/14 16:17:30 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main(void)
{
	Harl	test;

	test.complain("DEBUG");
	test.complain("WARNING");
	test.complain("INFO");
	test.complain("ERROR");
	test.complain("TEST");
	return (0);
}
