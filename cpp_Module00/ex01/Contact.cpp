/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:45:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/07 03:45:55 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number  = "";
	darkest_secret = "";
}


Contact::~Contact()
{
}

string	Contact::get_firstname()
{
	return (first_name);
}

string	Contact::get_lastname()
{
	return (last_name);
}

string	Contact::get_nickname()
{
	return (nickname);
}

string	Contact::get_phone_number()
{
	return (phone_number);
}

string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}

int	get_field(const char *str, string& field)
{
	field.clear();
	while (!field.length() && !cin.eof())
	{
		cout << UYellow << str << RESET << endl;
		getline(cin, field);
	}
	if (cin.eof())
		return (0);
	return (1);
}

void	Contact::fill_contact()
{
	cout << BCyan << "such an awsome day to add new contact, fill those fields please :)"
				<< RESET << endl;
	if (!get_field("first name :", first_name))
		exit(1);
	if (!get_field("last name :", last_name))
		exit(1);
	if (!get_field("nickname:", nickname))
		exit(1);
	if (!get_field("phone number :", phone_number))
		exit(1);
	if (!get_field("darckest secret :", darkest_secret))
		exit(1);
	cout << BCyan << "contact succesfully added" << RESET << endl;
}

void	Contact::display()
{
	if (!first_name.compare(""))
	{
		cout << Red << "there is no contact with this index :)" <<  RESET<< endl;
		return ;
	}
	cout <<  Yellow << std::setw(20) << std::left << "first name : " << RESET << first_name << endl;
	cout <<  Yellow << std::setw(20) << "last name : " << RESET << last_name << endl;
	cout <<  Yellow << std::setw(20) << "nickname : " << RESET << nickname << endl;
	cout <<  Yellow << std::setw(20) << "phone number : " << RESET << phone_number << endl;
	cout <<  Yellow << std::setw(20) << "darkest secret : " << RESET << darkest_secret << endl;
}