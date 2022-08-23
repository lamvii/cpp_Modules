/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:51 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 21:25:14 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	private:
		string 	name;
		int		_hit_points;
		int		_energie_points;
		int		_attack_damage;
	public:
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator =(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};	
