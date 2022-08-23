/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 23:18:04 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	ido("ido");
	ClapTrap	aissa("aissa");
	ClapTrap	smart("smart");
	ScavTrap	hliwa("7liwa");

	smart.attack("boss");
	smart.takeDamage(100);
	ido.beRepaired(666);
	aissa.takeDamage(10);
	aissa.takeDamage(10);
	hliwa.attack("ido");
	hliwa.guardGate();
}