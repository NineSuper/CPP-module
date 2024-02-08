/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:06:00 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/05 13:07:41 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

#include <iostream>
#include <string>
#include <cctype>

template <typename T>

void	inter(T *tab, size_t len, void (*funct)(T &))
{
	size_t	i;

	i = -1;
	if (!tab || !funct)
		return ;
	while (++i < len)
		funct(tab[i]);
}

#endif
