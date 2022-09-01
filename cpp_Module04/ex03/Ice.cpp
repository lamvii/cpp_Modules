/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:02:58 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:53:34 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

Ice	&Ice::operator = (const Ice &other)
{
	this->type = other.type;
	return (*this);
}

Ice::~Ice()
{
}

Ice	*Ice::clone() const
{
	Ice * ice = new Ice();
	return (ice);
}

void	Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
