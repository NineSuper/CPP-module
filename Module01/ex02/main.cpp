/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:42:06 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/12 11:59:29 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "String Variable : " << str << std::endl;
    std::cout << "Value pointed to stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to stringREF : " << stringREF << std::endl;
}
