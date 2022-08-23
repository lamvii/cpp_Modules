/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:25:44 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/24 00:29:20 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	cout << "FragTrap default constructor called" << endl;
	this->set_hit_points(100);
	this->set_energie(100);
	this->set_attack_damage(30);
}

FragTrap::FragTrap(string name)
{
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energie(100);
	this->set_attack_damage(30);
	cout << "FragTrap " << this->get_name() << " called constructor with pram" << endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap & FragTrap::operator=(const FragTrap &other)
{
	// whithout using get :) let the base operater = do the work
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << this->get_name() << " called destructor" << endl;
}

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap " << this->get_name() << ": high fives Guuuys :D" << endl;
}
