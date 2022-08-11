/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:02:00 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 20:25:49 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "Weapon.hpp"

using	std::string; 

class HumanA
{
	private:
		string	name;
		Weapon	waepon;
	public:
		// HumanA();
		HumanA(string name, Weapon& weapon);
		~HumanA();
		void	attack();
};

