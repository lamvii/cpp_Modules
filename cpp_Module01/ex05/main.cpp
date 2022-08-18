/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:06:21 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/18 01:09:30 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char** av)
{
	Harl harl;
	
	if (ac != 2)
	{
		cout << "please enter a level : DEBUG, INFO, WARNING, ERROR. " << endl;
		return (1);
	}

	harl.complain(av[1]);
}