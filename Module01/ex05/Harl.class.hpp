/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:41:53 by tde-los-          #+#    #+#             */
/*   Updated: 2023/12/14 16:29:43 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>

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
