/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:41:51 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 23:15:52 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ClapTrap.hpp"

class ScavTrap : public	ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		void guardGate();
};
