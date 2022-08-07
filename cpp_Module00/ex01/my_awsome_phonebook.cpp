/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awsome_phonebook.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:04:52 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/07 03:43:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	welcome_message()
{
	cout	<< BCyan << std::setfill('*') << std::setw(40) <<"WELCOME"
			<< std::setw(34) << " " << std::setfill(' ') << endl;
	cout 	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout 	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout	<< std::left << std::setw(17) << "*"
			<< "commands available are : ADD SEARCH EXIT"
			<< std::setw(16) << std::right << "*" <<endl;
	cout 	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout 	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout 	<< std::left << std::setw(72) << "*" << std::right << "*" << endl;
	cout	<< std::setw(74) << std::setfill('*') << " " << std::setfill(' ') << RESET << endl;  

}

int main(void)
{
	PhoneBook	phone_book;
	string		command;

	welcome_message();
	while (getline(cin, command))
	{
		if (!command.compare("ADD"))
			phone_book.add_new_contact();
		else if (!command.compare("SEARCH"))
			phone_book.search();
		else if (!command.compare("EXIT"))
		{
			cout << BCyan << "PHONEBOOK CLOSED" << RESET << endl; 
			exit(0);
		}
		else
			cout << Red << "invalid command try: ADD , SEARCH, EXIT " << RESET <<endl; 
	}
	return (0);
}

