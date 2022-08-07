/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:28:40 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/07 03:43:31 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_new_contact()
{
	static	int16_t	index;

	if (index == 8)
		index = 0;
	array[index].fill_contact();
	index++;
}

bool	isnumber(string index)
{
	return (index.find_first_not_of("0123456789") == string::npos);
}

void	trunc_names(Contact contact, string &fname, string &lname, string &nname)
{
	fname = contact.get_firstname();
	lname = contact.get_lastname();
	nname = contact.get_nickname();

	if (fname.size() > 10)
	{
		fname.resize(9);
		fname.append(".");
	}
	if (lname.size() > 10)
	{
		lname.resize(9);
		lname.append(".");
	}
	if (nname.size() > 10)
	{
		nname.resize(9);
		nname.append(".");
	}
}

void	display_saved_contact(Contact array[8])
{
	string	fname;
	string	lname;
	string	nnaem;

	cout	<< Yellow << std::setw(10) << std::right << "index" << "|"
			<< std::setw(10)  << "first name" << "|"
			<< std::setw(10)  << "last name" << "|"
			<< std::setw(10)  << "nickname"  << RESET << endl;
	for (int16_t i = 0 ; i < 8; i++)
	{
		if (!array[i].get_firstname().compare(""))
			continue ;
		else
			{
				trunc_names(array[i], fname, lname, nnaem);
				cout	<< std::setw(10)  << i << Yellow << "|" << RESET
						<< std::setw(10)  << fname << Yellow << "|" << RESET
						<< std::setw(10)  << lname << Yellow << "|" << RESET
						<< std::setw(10)  << nnaem << endl;
			}
	}
}

void	PhoneBook::search()
{
	string	index;
	int 	i;

	display_saved_contact(array);
	cout	<< Yellow << "enter index of your contact" << RESET << endl;
	getline(cin, index);
	if (cin.eof())
		exit(1);
	if (!isnumber(index))
	{
		cout << Red << "invalid index :)" << RESET << endl;
		return ;
	}
	std::stringstream(index) >> i;
	if (i < 7)
		array[i].display();
}
