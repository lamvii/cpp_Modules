/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:13:07 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/07 03:45:12 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
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
		string	get_lastname();
		string	get_nickname();
		string	get_phone_number();
		string	get_darkest_secret();
		void	fill_contact(void);
		void	display(void);
};

