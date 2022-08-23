/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:15:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/24 00:20:16 by ael-idri         ###   ########.fr       */
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

ScavTrap::ScavTrap(string name)
{
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energie(50);
	this->set_attack_damage(20);
	cout << "ScavTrap " << this->get_name() << " called constructor with pram" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	// whithout using get :) let the base operater = do the work
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