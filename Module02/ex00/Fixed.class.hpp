/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:37 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/15 09:53:39 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	private:
		int	_number;
		static const int	_bits = 8;

	public:
		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed& operator=(const Fixed &src);
		Fixed(const Fixed& src);
		Fixed(void);
		~Fixed(void);
};

#endif
