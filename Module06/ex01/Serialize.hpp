/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:42:33 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/06 14:28:58 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
	std::string	name;
	int			age;
	Data		*next;
}	s_Data;

class Serialize
{
	private:
		Data	*_ptr;
	public:
		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);

		Serialize();
		Serialize(const Serialize &cpy);
		Serialize &operator=(const Serialize &cpy);
		~Serialize();
};

#endif
