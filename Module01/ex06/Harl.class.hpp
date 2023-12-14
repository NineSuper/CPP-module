/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:41:53 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/14 16:26:03 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>

/*
* "Debug" Message de debogage, informations contextuelles

* "Info" Message d'information, Suivre l’exécution d’un programme dans un environnement de production.

* "Warning" Message d'avertissement, un problème potentiel dans le systeme, \
* il peut être traité ou ignoré

* "Error" Message d'une erreur irrécupérable, problème critique qui nécessite une intervention manuelle

? void	complain(... level) -> pointeur vers des les fonctions membres
*/

class Harl
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);


	public:
    void	complain(std::string level);

	Harl(void);
	~Harl(void);
};

#endif
