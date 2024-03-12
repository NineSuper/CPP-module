/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:32:29 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/20 19:35:37 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string.h>
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include <stack>

class RPN
{
	private:
		std::stack<int>	_container;

	public:
		void	calculate(char *str);

		RPN &operator=(const RPN &cpy);
		RPN(const RPN &cpy);
		RPN();
		~RPN();
};

#endif
