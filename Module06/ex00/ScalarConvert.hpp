/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:16:52 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/06 14:24:34 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

#include <iostream>

typedef struct	t_numbers
{
	std::string input;
	char		c;
	int			i;
	float		f;
	double		d;
}	s_numbers;

class ScalarConvert
{
	private:
		ScalarConvert();
	public:
		static void	isInt(t_numbers *num);
		static void	isChar(t_numbers *num);
		static void	isFloat(t_numbers *num);
		static void	isDouble(t_numbers *num);
		static void	convert(std::string input);

		~ScalarConvert();
};

#endif
