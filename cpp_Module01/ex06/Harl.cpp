/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:08:31 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/18 01:08:00 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*pointer_to_function) (void);
enum	levels	{DEBUG , INFO, ERROR, WARNING};

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << endl;
	cout << "I really do!" << endl;
}

void	Harl::info(void)
{
	cout << "[ INFO ]" << endl;
	cout <<  "I cannot believe adding extra bacon costs more money." << endl;
	cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning(void)
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free." << endl;
	cout << "I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::non_availabe_level(void)
{
	cout << "[ Probably complaining about insignificant problems ]" << endl;
}

levels	wich_level(string	level)
{
	string	level_tab[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};
	levels	enumeration[4] = {DEBUG, INFO, ERROR, WARNING};

	int i = 0;
	while (level_tab[i].compare(level) && i < 4)
		i++;
	return (enumeration[i]);
}

void	Harl::complain(string	level)
{
	pointer_to_function level_pointer[5] = { &Harl::debug , &Harl::info , &Harl::warning, &Harl::error, &Harl::non_availabe_level};

	switch (wich_level(level))
	{
		case DEBUG:
			(this->*level_pointer[0])();
		case INFO:
			(this->*level_pointer[1])();
		case WARNING:
			(this->*level_pointer[2])();
		case ERROR:
			(this->*level_pointer[3])();
			break;
		default:
			(this->*level_pointer[4])();
	}
}