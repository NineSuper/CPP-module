/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:58:07 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/19 10:07:57 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(7);
	MutantStack<int>::iterator it = mstack.begin() - 1;
	MutantStack<int>::iterator ite = mstack.end() - 1;
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout <<  "Size: " << mstack.size() << std::endl;
	while (++it != ite)
		std::cout << *it << std::endl;

	std::cout << "-- Copy --" << std::endl;
	std::stack<int> cpy(mstack);
	cpy.push(42);
	cpy.push(1337);
	cpy.push(72);
	std::cout << "Top: " << cpy.top() << std::endl;
	cpy.pop();
	std::cout <<  "Size: " << cpy.size() << std::endl;

	//it = cpy.begin() - 1;
	//ite = cpy.end() - 1;
	return 0;
}

