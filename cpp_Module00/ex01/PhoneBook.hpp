/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:57:22 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/06 23:43:39 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
	Contact	array[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	add_new_contact();
		void 	search();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_new_contact()
{
	static	int16_t	index;

	array[index].fill_contact();
	index++;
}

void	display_saved_contact(Contact array[8])
{
	cout	<< std::setw(10) << std::right << "index" << "|"
			<< std::setw(10) << std::right << "first name" << "|"
			<< std::setw(10) << std::right << "last name" << "|"
			<< std::setw(10) << std::right << "nickname" << endl;
	for (int16_t i = 0 ; i < 8; i++)
	{
		if (!array[i].get_firstname().compare(""))
			continue ;
		else
			{
			}
	}
}

void	PhoneBook::search()
{
	display_saved_contact(array);
}

# endif