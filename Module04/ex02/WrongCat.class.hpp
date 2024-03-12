/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:29:10 by tde-los-          #+#    #+#             */
/*   Updated: 2024/01/08 08:32:14 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		void	makeSound() const;

		WrongCat();
		~WrongCat();
};

#endif
