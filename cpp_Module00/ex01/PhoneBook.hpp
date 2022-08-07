/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:57:22 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/07 03:39:35 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Contact.hpp"
# include <sstream>

class PhoneBook
{
	Contact	array[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	add_new_contact();
		void 	search();
};
