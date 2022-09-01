/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:01:59 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:53:15 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure	&Cure::operator = (const Cure &other)
{
	this->type = other.type;
	return (*this);
}

Cure::~Cure()
{
}

Cure	*Cure::clone() const
{
	Cure * cure = new Cure();
	return (cure);
}

void	Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}
