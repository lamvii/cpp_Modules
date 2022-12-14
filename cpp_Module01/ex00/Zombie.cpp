/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:48:49 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/20 20:35:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	name = "newZombieName";
}

Zombie::~Zombie()
{
	std::cout << name << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name.clear();
	this->name = name;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

