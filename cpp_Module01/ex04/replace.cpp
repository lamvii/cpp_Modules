/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:38:10 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/15 19:40:16 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


void	replace_file(std::fstream &infile, std::fstream &outfile ,string s1,string s2)
{
	string		line;
	string		replaced_line;
	std::size_t	pos = 0;


	while (getline(infile, line))
	{
		replaced_line.clear();
		while ((((pos = line.find(s1)) != std::string::npos)) && s1.compare(""))
		{
			replaced_line.append(line.substr(0, pos));
			replaced_line.append(s2);
			line = line.substr(pos + s1.length());
		}
		replaced_line.append(line);
		outfile << replaced_line << endl;
	}
	
	infile.close();
	outfile.close();
}