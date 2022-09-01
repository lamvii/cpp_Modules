/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:00:38 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:58:23 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &)
{	
}

AMateria& AMateria::operator= (const AMateria&)
{
	return (*this);
}

AMateria::~AMateria()
{
}

string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter&)
{
}