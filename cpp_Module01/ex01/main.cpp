/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 01:03:12 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 14:07:31 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie	*Z = zombieHorde(10, "brand");
	for(int i = 0; i < 10 ; i++)
		Z[i].announce();
	delete [] Z;
}