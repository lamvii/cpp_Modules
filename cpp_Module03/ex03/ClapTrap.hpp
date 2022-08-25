/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:51 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/25 18:08:29 by ael-idri         ###   ########.fr       */
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
		unsigned int		_hit_points;
		unsigned int		_energie_points;
		unsigned int		_attack_damage;
	public:
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator =(const ClapTrap &other);
		~ClapTrap();

		// setter
		void set_name(string name);
		void set_hit_points(unsigned int);
		void set_energie(unsigned int);
		void set_attack_damage(unsigned int);

		// getter
		string get_name();
		unsigned int get_hit_p();
		unsigned int get_energie();
		unsigned int get_attack_damage();

		// other function
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};	
