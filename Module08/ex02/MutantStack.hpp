/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:58:05 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/19 09:46:23 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &cpy);
	MutantStack &operator=(const MutantStack &cpy);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

# include "MutantStack.tpp"

#endif
