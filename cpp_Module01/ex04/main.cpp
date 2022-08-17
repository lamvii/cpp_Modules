/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:15:17 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/15 19:32:28 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	init(string &oldfile, string &new_file , string &s1, string &s2, char **av)
{
	oldfile = av[1];
	s1 = av[2];
	s2 = av[3];
	new_file = oldfile + ".replace";
}

bool	check_files(string oldfile, string new_file, std::fstream &infile, std::fstream &outfile)
{
	if (!infile.is_open())
	{
		cout << "opening " << oldfile <<" is  failled" << endl;
		return (false);
	}
	if (!outfile.is_open())
	{
		cout << "opening " << new_file << " is  failled" << endl;
		return (false);
	}
	return (true);
}

int main(int ac, char **av)
{
	string	oldfile;
	string	s1;
	string	s2;
	string	new_file;

	if (ac != 4)
	{
		cout << "invalid argument" << endl;
		return (1);
	}

	init(oldfile, new_file , s1, s2, av);
	
	std::fstream infile(oldfile, std::fstream::in);
	std::fstream outfile(new_file, std::fstream::out);
	if (!check_files(oldfile, new_file, infile, outfile))
		return (1);
	
	replace_file(infile, outfile, s1, s2);
}