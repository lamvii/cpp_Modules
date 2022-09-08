/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/08 21:30:15 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat kamas(-2, "kamas");
	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
	try
	{
		Bureaucrat sama(160, "sama");
	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
	try
	{
		Bureaucrat sama(150, "sama");
		sama--;
	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
	try
	{
		Bureaucrat sama(1, "sama");
		sama++;
	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
		try
	{
		Bureaucrat sama(140, "sama");
		cout << sama << endl;
		cout << sama++ << endl;
		cout << sama-- << endl;

	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
	cout << "end test" << endl;
}