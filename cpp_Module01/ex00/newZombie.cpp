/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:49:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 13:51:43 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *Z = new ::Zombie();
	// Zombie Z;
	// Z.set_name(name);
	// return (&Z);
	(*Z).set_name(name);
	return (Z);
}