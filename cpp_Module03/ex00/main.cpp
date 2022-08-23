/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 21:36:01 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ido("ido");
	ClapTrap	aissa("aissa");
	ClapTrap	smart("smart");

	smart.attack("boss");
	smart.takeDamage(100);
	ido.beRepaired(666);
	aissa.takeDamage(10);
	aissa.takeDamage(10);
}