/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.Cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:05:33 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/14 13:38:21 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <fstream>

void	ft_newfile(std::string src, std::string dest, std::string str1, std::string str2)
{
 	std::ifstream	OldFile(src.c_str());
 	std::ofstream	NewFile(dest.c_str());
 	std::string		NewStr;
 	char			caractere;
 	std::size_t		pos;
	int i = 0;

   	while (OldFile.get(caractere))
 	{
 		NewStr.push_back(caractere);
 		pos = NewStr.find(str1, i);
 		if (pos < NewStr.length())
 		{
 			NewStr.erase(pos, str1.length());
 			NewStr.insert(pos, str2);
			i = pos + str1.length();
 		}
		
 	}
	NewFile << NewStr;
 	std::cout << NewStr << std::endl;
	OldFile.close();
 	NewFile.close();
}

void    ft_checkarg(char **argv)
{
    std::string file(argv[1]);
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	int		i;
	
	i = file.length() - 1;
	if (file[i] != 't' || file[i - 1] != 'x' || file[i - 2] != 't' || file[i - 3] != '.')
	{
		std::cout << "./replace <filename.txt> *source *replace" << std::endl;
		exit (0);
	}
	std::ifstream fichier(file.c_str());
	if (fichier)
	{
		fichier.close();
		ft_newfile(file, file.insert(i - 3, ".replace"), str1, str2);
	}
	else
	{
		std::cout << "le fichier n'existe pas" << std::endl;
		exit (0);
	}
}

int	main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "./replace <filename.txt> *source *replace" << std::endl, 0);
	else
		ft_checkarg(argv);
    return (0);
}