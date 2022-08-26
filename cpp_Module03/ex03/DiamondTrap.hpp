/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:50:24 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/26 15:05:57 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap
{
	private:
		string name;
	public:
		DiamondTrap();
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator =(const DiamondTrap &other);
		void attack(const std::string& target);
		~DiamondTrap();
		void whoAmI();
};
