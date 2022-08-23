/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:26:25 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 14:17:16 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "Weapon.hpp"

using	std::string; 

class HumanB
{
	private:
		string	name;
		// pointer do not invok the constructor of weapon and can be null
		Weapon	*waepon;
	public:
		// HumanA();
		HumanB(string name);
		~HumanB();
		void	setWeapon(Weapon &katana);
		void	attack();
};
