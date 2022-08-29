/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/29 00:38:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap	hliwa("7liwa");
	ScavTrap	dog("Dog");

	hliwa.attack("boss");
	dog.guardGate();
	dog.attack("Boss");
	hliwa.highFivesGuys();
	hliwa.takeDamage(2000);
}