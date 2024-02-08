/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:25:51 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/06 12:55:52 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

const T	&max(const T &x ,const T &y)
{
	if (x >= y)
		return (x);
	return (y);
}

template <typename U>

const U	&min(const U &x ,const U &y)
{
	if (x <= y)
		return (x);
	return (y);
}

template <typename V>

void swap(V &x, V &y)
{
	V temp = x;
	x = y;
	y = temp;
}

#endif
