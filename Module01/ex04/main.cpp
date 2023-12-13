/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.Cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:05:33 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/13 16:14:40 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <fstream>

/*
* Créez un programme qui prend trois paramètres dans l'ordre suivant : un nom de fichier et deux chaînes, s1 et s2.

* Il ouvrira le fichier <filename> et copiera son contenu dans un nouveau fichier <filename>.replace, 
* en remplaçant chaque occurrence de s1 par s2.
*/

void	ft_newfile(std::string src, std::string dest, std::string str1, std::string str2)
{
 	std::ifstream	OldFile(src.c_str());
 	std::ofstream	NewFile(dest.c_str());
 	std::string		NewStr;
 	char			caractere;
 	std::size_t		pos = 0;

	OldFile.get(caractere);
	std::cout << caractere;
   	while (OldFile.get(caractere))
 	{
 		NewStr.push_back(caractere);
 		pos = NewStr.find(str1);
 		if (pos <= NewStr.length())
 		{
 			NewStr.erase(pos, str1.length());
 			NewStr.insert(pos, str2);
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
	ft_checkarg(argv);
    return (0);
}