/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:35:27 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 19:54:39 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once

#include <iostream>

using	std::string;

class Weapon
{
	private:
		string	type;
	public:
		Weapon();
		Weapon(string type);
		~Weapon();
		const string&	getType(void);
		void	setType(string nType);
};
