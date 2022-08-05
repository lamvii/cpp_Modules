/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awsome_phonebook.cpp.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:04:52 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/05 00:54:52 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void)
{
	Contact	new_contact;
	
	new_contact.display();
	new_contact.~Contact();
	return (0);
}

