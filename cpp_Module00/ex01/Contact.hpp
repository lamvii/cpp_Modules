/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:13:07 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/05 01:53:27 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "collors.hpp"

class	Contact {

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
		Contact(void);
		~Contact(void);
		// Contact(const Contact& copy);
		// Contact &operator = (const Contact &contact);
		void	display(void);
};

Contact::Contact()
{
	std::cout << SKY_BLEU << "such an awsome day to add new contact, fill those fields please :)"
				<< RESET << std:: endl;
	while (first_name.length() == 0)
	{
		std::cout << BLEU << "First name :" << std::endl;
		getline(std::cin, first_name);
	}
	while (last_name.length() == 0)
	{
		std::cout << "last name :" << std::endl;
		getline(std::cin, last_name);
	}
	while (nickname.length() == 0)
	{
		std::cout << "nickname:" << std::endl;
		getline(std::cin, nickname);
	}
	while (phone_number.length() == 0)
	{
		std::cout << "phone number" << std::endl;
		getline(std::cin, phone_number);
	}
	while (darkest_secret.length() == 0)
	{
		std::cout << "darckest secret" << std::endl;
		getline(std::cin, darkest_secret);
	}
	std::cout << "contact succesfully added" << RESET << std::endl;
}

Contact::~Contact()
{
}

void	Contact::display()
{
	std::cout << first_name;
}

# endif