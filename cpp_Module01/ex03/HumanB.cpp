/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:28:41 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/12 00:18:20 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using	std::string;
using	std::cout;
using	std::endl;

HumanB::~HumanB()
{
}

//in this case without & , the func gonna coppy clube in another instance then copy element of clube to it , then copy it the invok instance
HumanB::HumanB(string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &katana)
{
	this->waepon = &katana;
}

void	HumanB::attack(void)
{
	cout << name << " attacks with their " << waepon->getType() << endl;	
}