/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:50:24 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/25 22:33:42 by ael-idri         ###   ########.fr       */
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
};

DiamondTrap::DiamondTrap()
{
	cout << "DiamondTrap default constructor called" << endl;
	this->name = "default";
	this->FragTrap::set_hit_points(100);
	this->FragTrap::set_energie(50);
	this->FragTrap::set_attack_damage(30);
}

DiamondTrap::DiamondTrap(string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name") ,  FragTrap(name + "_clap_name")
{
	this->name = name;  
	this->FragTrap::set_hit_points(100);
	this->FragTrap::set_energie(100);
	this->FragTrap::set_attack_damage(30);
	cout << "DiamondTrap " << this->FragTrap::get_name() << " called constructor with pram" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	// whithout using get :) let the base operater = do the work
	FragTrap::operator=(other);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << this->FragTrap::get_name() << " called destructor" << endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}