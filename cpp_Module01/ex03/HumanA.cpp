/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:01:55 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 20:23:54 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using	std::string;
using	std::cout;
using	std::endl;

HumanA::~HumanA()
{
}

//in this case without & , the func gonna coppy clube in another instance then copy element of clube to it , then copy it the invok instance
HumanA::HumanA(string name, Weapon& weapon)
{
	this->name = name;
	this->waepon = weapon;
}

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << waepon.getType() << endl;	
}