/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 01:03:12 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 01:10:49 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie	*Z = zombieHorde(100, "hhh");
	for(int i = 0; i < 100 ; i++)
		Z[i].announce();
	delete [] Z;
}