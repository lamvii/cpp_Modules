/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:18:54 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/29 00:30:25 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	bat("bat");
	ScavTrap	hliwa("7liwa");

	bat.beRepaired(666);
	bat.attack("7liwa");
	hliwa.attack("bat");
	hliwa.guardGate();
}