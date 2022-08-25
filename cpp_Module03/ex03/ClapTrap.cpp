/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:48 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/25 18:08:15 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	cout << "default ClapTrap constructor called" <<endl;
	name = "default";
	_hit_points = 10;
	_energie_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(string name)
{
	cout << "ClapTrap " << name << " called constructor with param" <<endl;
	this->name = name;
	_hit_points = 10;
	_energie_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	// cout << "copy constructor called" <<endl;
	*this = copy;
}

ClapTrap & ClapTrap::operator =(const ClapTrap &other)
{
	// cout << "assignment operator called" <<endl;
	name = other.name;
	_hit_points = other._hit_points;
	_energie_points = other._energie_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	cout << " ClapTrap " << name << " destructor called" <<endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energie_points > 0)
	{
		cout << "ClapTrap " << name << " attacks " << target
			<< " causing " << _attack_damage<< " points of damage!" << endl;
		_energie_points--;
	}
	else
		cout << "ClapTrap " << name
				<< " can't attack : energie points not enough" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hit_points)
	{
		cout << "ClapTrap has no health points, he can't take this damage !!" << endl;
		return ;
	}
	else if (_hit_points <= amount)
		_hit_points = 0;
	else
		_hit_points -= amount;
	cout 	<< "ClapTrap " << name << " takes " << amount << " damage,"
		<< " health points left "<< _hit_points << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energie_points > 0)
	{
		cout 	<< "ClapTrap " << name << " repaired " << amount
				<< " health points" << endl;
		
		_hit_points += amount;
		_energie_points--;
	}
	else
		cout << "ClapTrap " << name
				<< " can't beRepaired : energie points not enough" << endl;
}

void ClapTrap::set_name(string name)
{
	this->name = name;
}

void ClapTrap::set_hit_points(unsigned int set)
{
	_hit_points = set;
}

void ClapTrap::set_energie(unsigned int set)
{
	_energie_points = set;
}

void ClapTrap::set_attack_damage(unsigned int set)
{
	_attack_damage = set;
}

string ClapTrap::get_name()
{
	return (name);
}

unsigned int ClapTrap::get_hit_p()
{
	return (_hit_points);
}

unsigned int ClapTrap::get_energie()
{
	return (_energie_points);
}

unsigned int ClapTrap::get_attack_damage()
{
	return (_attack_damage);
}
