/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:37 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/15 13:09:15 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_number;
		static const int	_bits;

	public:
		float	toFloat(void) const;
		int	toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed& operator=(const Fixed &src);
		Fixed(const Fixed& src);
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);
};

std::ostream	&operator<<(std::ostream &obj, Fixed const &a);
#endif
