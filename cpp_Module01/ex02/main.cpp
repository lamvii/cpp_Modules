/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:22 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 14:10:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;


int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str; 
	
	cout << "string address: " << &str << endl;
	cout << "stringPTR address: " << stringPTR << endl;
	cout << "stringREF address: " << &stringREF << endl;

	cout << "value of the string variable : " << str << endl;
	cout << "value pointed to by stringPTR : " << *stringPTR << endl;
	cout << "value pointed to by stringREF : " << stringREF << endl;
}