/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:37 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/16 13:10:52 by tde-los-         ###   ########.fr       */
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
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);

		static	Fixed &min(Fixed &a, Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);
		static const	Fixed &min(const Fixed &a, const Fixed &b);
		static const	Fixed &max(const Fixed &a, const Fixed &b);

		bool operator>(const Fixed &src)  const;
		bool operator<(const Fixed &src)  const;
		bool operator>=(const Fixed &src) const;
		bool operator<=(const Fixed &src) const;
		bool operator==(const Fixed &src) const;
		bool operator!=(const Fixed &src) const;

		Fixed &operator=(const Fixed &src);
		Fixed operator+(const Fixed &src) const;
		Fixed operator-(const Fixed &src) const;
		Fixed operator*(const Fixed &src) const;
		Fixed operator/(const Fixed &src) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		Fixed(const Fixed& src);
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);
};

std::ostream	&operator<<(std::ostream &obj, Fixed const &a);
#endif
