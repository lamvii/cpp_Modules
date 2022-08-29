/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:15:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/29 00:20:24 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	cout << "ScavTrap default constructor called" << endl;
	this->set_hit_points(100);
	this->set_energie(50);
	this->set_attack_damage(20);
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->set_hit_points(100);
	this->set_energie(50);
	this->set_attack_damage(20);
	cout << "ScavTrap " << this->get_name() << " called constructor with pram" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	cout << "ScavTrap called copy constructor" << endl;
	*this = copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	cout << "ScavTrap called assignment operator" << endl;
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << this->get_name() << " called destructor" << endl;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap " << this->get_name() << " is now in Gate keeper mode" << endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (get_energie() > 0)
	{
		cout << "ScavTrap " << get_name() << " attacks " << target
			<< " causing " << get_attack_damage() << " points of damage!" << endl;
		set_energie(get_energie() - 1);
	}
	else
		cout << "ScavTrap " << get_name()
				<< " can't attack : energie points not enough" << endl;
}