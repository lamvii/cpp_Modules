/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:46:48 by ael-idri          #+#    #+#             */
/*   Updated: 2022/07/27 23:24:17 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using	std::cout;
using	std::endl;
using	std::string;

int	main(int ac, char **av)
{
	string output;

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				av[i][j] = toupper(av[i][j]);
			output += av[i];
		}
		cout << output << endl;
	}
	return (0);
}