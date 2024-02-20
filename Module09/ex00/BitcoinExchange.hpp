/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:39:34 by tde-los-          #+#    #+#             */
/*   Updated: 2024/02/20 12:25:46 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstdlib>

class Bitcoin
{
	private:
		std::map<std::string, float>	_data;
		std::map<std::string, float>	_container;

	public:
		void	printContainer() const;
		void	printData() const;
		float	getData(std::string key) const;
		void	addContainer(const std::string date, const float value);
		void	addData(const std::string date, const float value);

		Bitcoin &operator=(const Bitcoin &cpy);
		Bitcoin(const Bitcoin &cpy);
		Bitcoin();
		~Bitcoin();
};

#endif
