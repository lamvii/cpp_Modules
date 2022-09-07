/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/07 22:30:10 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main()
{
	Bureaucrat hliwa(2, "7liwa");
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		hliwa.signForm(*rrf);
		hliwa.executeForm(*rrf);
		delete rrf;
	}
	catch(const char *error)
	{
		std::cerr << error << endl;
	}
}

	cout << endl << "end test robotomy" << endl << endl;

{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Presidential request", "Bender");
		hliwa.signForm(*rrf);
		hliwa.executeForm(*rrf);
		delete rrf;
	}
	catch(const char *error)
	{
		std::cerr << error << endl;
	}
}
	
	cout << endl << "end test Presidential" << endl << endl;

{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery request", "Bender");
		hliwa.signForm(*rrf);
		hliwa.executeForm(*rrf);
		delete rrf;		
	}
	catch(const char *error)
	{
		std::cerr << error << endl;
	}
	
}

	cout << endl << "end test Shrubbery" << endl << endl;

{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("request", "Bender");
		hliwa.signForm(*rrf);
		hliwa.executeForm(*rrf);
		delete rrf;
	}
	catch(const char *error)
	{
		std::cerr << error << endl;
	}
	
}

	cout << endl << "end test random request" << endl << endl;
}