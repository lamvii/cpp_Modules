/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:50:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/29 01:36:34 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout << "DiamondTrap default constructor called" << endl;
	this->name = "default";
	this->FragTrap::set_hit_points(100);
	this->FragTrap::set_energie(50);
	this->FragTrap::set_attack_damage(30);
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") 
{
	this->name = name;
	this->ClapTrap::set_hit_points(100);
	this->ClapTrap::set_energie(50);
	this->ClapTrap::set_attack_damage(30);
	cout << "DiamondTrap " << this->ClapTrap::get_name() << " called constructor with pram" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	cout << "DiamondTrap called copy constructor" << endl;
	*this = copy;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	cout << "DiamondTrap called assignment operator" << endl;
	FragTrap::operator=(other);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << this->ClapTrap::get_name() << " called destructor" << endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout << "My Diamond name is :" << name <<endl;
	cout << "My Clap name is :" << this->ClapTrap::get_name() << endl;
}