/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:29:37 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/12 11:54:46 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename T>

class Array
{
	private:
		T				*_array;
		unsigned int	_len;
	public:
		Array()
		{
			_len = 0;
			_array = new T[this->_len];
		}

		Array(unsigned int len)
		{
			_len = len;
			_array = new T[this->_len];
		}

		Array(const Array &cpy)
		{
			std::cout << "[Array Cpy]" << std::endl;
			_len = cpy._len;
			_array = NULL;
			*this = cpy;
		}

		~Array()
		{
			if (_array)
				delete [] _array;
		}

		Array &operator=(const Array &src)
		{
			if (_array != NULL)
				delete [] _array;
			if (src.len() != 0)
			{
				int	i = -1;
				_len = src.len();
				_array = new T[_len];
				while (++i < (int)len())
					_array[i] = src._array[i];
			}
			return (*this);
		}

		T &operator[](int i)
		{
			if ((unsigned int)i >= _len || !_array)
			{
				std::cout << "index: " << i << std::endl;
				throw Array<T>::InvalidIndexException();
			}
			return (_array[i]);
		}

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		unsigned int len() const
		{
			return (_len);
		}
};


template <typename T>
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}
#endif
