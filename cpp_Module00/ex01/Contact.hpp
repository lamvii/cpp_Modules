/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:13:07 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/06 23:35:11 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "colors.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;

class	Contact {

	string first_name;
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;

	public:
		Contact(void);
		~Contact(void);
		// Contact(const Contact& copy);
		// Contact &operator = (const Contact &contact);
		string	get_firstname();
		void	fill_contact(void);
		void	display(void);
};

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

int	get_field(const char *str, string& field)
{
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
	cout << first_name;
}
