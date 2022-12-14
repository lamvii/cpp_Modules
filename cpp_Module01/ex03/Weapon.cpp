/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:37:19 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/12 00:08:50 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

const string&	Weapon::getType(void)
{
	const string& typeRef = type;
	return (typeRef);
}

void	Weapon::setType(string nType)
{
	type.clear();
	type = nType;
}