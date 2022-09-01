/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:01:34 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 18:03:48 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
	this->name = "default";
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = NULL;
}

Character::Character(string name)
{
	this->name = name;
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator = (const Character &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0 ; i < 4; i++)
		if (this->slots[i])
			delete this->slots[i];
	this->name = other.name;
	for (int i = 0 ; i < 4; i++)
	{
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0 ; i < 4; i++)
		if (this->slots[i])
			delete this->slots[i];
}


string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (this->slots[i] && i < 4)
		i++;
	if (i < 4)
		this->slots[i] = m->clone();
}

void Character::unequip(int idx)
{
	if (idx < 4 && this->slots[idx])
		this->slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->slots[idx])
		this->slots[idx]->use(target);
}
