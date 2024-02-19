/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:06:00 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/12 14:24:21 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cctype>

template <typename T>

void	iter(T *tab, size_t len, void (*funct)(const T &))
{
	size_t	i;

	i = -1;
	if (!tab || !funct)
		return ;
	while (++i < len)
		funct(tab[i]);
}

#endif
