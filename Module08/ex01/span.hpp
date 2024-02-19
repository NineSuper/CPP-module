/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:34:53 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/15 13:49:06 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <numeric>
# include <ctime>
# include <cstdlib>

class span
{
	private:
		size_t	_size;
		std::vector<int>	_container;
	public:
		class ContainerEmpty : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Container.size == 0";
				}
		};
		class ContainerLength: public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Container.size == 1";
				}
		};

		void	addNumber(int nb);
		void	randomNumber();
		int		shortestSpan();
		int		longestSpan();

		span(size_t size);
		span(const span &cpy);
		span &operator=(const span &cpy);
		span();
		~span();
};

#endif
