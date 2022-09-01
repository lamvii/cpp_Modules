/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:32:38 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:42:14 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4 ; i++)
		slots[i] = NULL; 
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0 ; i < 4; i++)
		if (this->slots[i])
			delete this->slots[i];
	for (int i = 0 ; i < 4; i++)
	{
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4; i++)
		if (this->slots[i])
			delete this->slots[i];
}


void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while (this->slots[i] && i < 4)
		i++;
	if (i < 4)
		this->slots[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (!(this->slots[i]->getType()).compare(type))
			return (this->slots[i]);
	return (NULL);
}
