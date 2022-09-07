/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/07 00:04:27 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat sama(140, "sama");
	Bureaucrat hliwa(2, "7liwa");
{
	ShrubberyCreationForm form("plant");
	PresidentialPardonForm form2("pardon");
	RobotomyRequestForm form3("rob");
	sama.signForm(form);
	sama.signForm(form2);
	sama.signForm(form3);

	sama.executeForm(form);
	sama.executeForm(form2);
	sama.executeForm(form3);
}

	cout << "end test 1" << endl;

{
	ShrubberyCreationForm form("plant");
	PresidentialPardonForm form2("pardon");
	RobotomyRequestForm form3("rob");
	hliwa.signForm(form);
	hliwa.signForm(form2);
	hliwa.signForm(form3);

	hliwa.executeForm(form);
	hliwa.executeForm(form2);
	hliwa.executeForm(form3);
}
	
	cout << "end test 2" << endl;
}