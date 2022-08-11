/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 23:34:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 00:49:11 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main()
{
	Zombie	Z1;
	Zombie	*Z2 = newZombie("hhh");
	// Z2->announce();
	randomChump("random");
	Z2->announce();
	Z1.announce();
	delete	Z2;
}