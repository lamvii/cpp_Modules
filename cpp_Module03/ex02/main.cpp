/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/24 00:30:51 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap	ido("ido");
	ClapTrap	aissa("aissa");
	ScavTrap	hliwa("7liwa");
	FragTrap	smart("smart");

	ido.beRepaired(666);
	aissa.takeDamage(10);
	aissa.takeDamage(10);
	hliwa.attack("ido");
	hliwa.guardGate();
	smart.attack("boss");
	smart.highFivesGuys();
}