/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:58 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/06 18:04:13 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include "Contact.class.hpp"

class	Phonebook {

	private:
	Contact	_repertory[8];
	void	init_repertory(void);

	public:
	void	print_book(void) const;
	void	add_contact(void);

	Phonebook(void);
	~Phonebook(void);
};

#endif