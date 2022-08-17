/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:06:28 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/17 20:20:04 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*pointer_to_function) (void);

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info(void)
{
	cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::non_availabe_level(void)
{
	cout << "complaining level not found & _ & " << endl;
}

void	Harl::complain(string	level)
{
	Harl	harl;
	string	levels[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};
	pointer_to_function level_pointer[5] = { &Harl::debug , &Harl::info , &Harl::warning, &Harl::error, &Harl::non_availabe_level};
	
	int i = 0;
	while (level.compare(levels[i]))
		i++;
	(harl.*level_pointer[i])();
}