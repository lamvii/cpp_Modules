/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:13:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/08 22:13:38 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
}

Intern::Intern(const Intern &)
{
}

Intern & Intern::operator = (const Intern &)
{
    return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(string formName, string targetName)
{
    int     form;
    Form    *internForm = NULL;
    
    string arr[3] = {"Presidential request", "robotomy request", "Shrubbery request"};
    
    for (form = 0; form < 3; form++)
    {
        if (arr[form] == formName)
            break ;
    }

    switch (form)
    {
        case 0:
            internForm = new PresidentialPardonForm(targetName);
            return (cout << "Intern creates " << *internForm <<endl, internForm);
        case 1:
            internForm = new RobotomyRequestForm(targetName);
            return (cout << "Intern creates " << *internForm <<endl, internForm);
        case 2:
            internForm = new ShrubberyCreationForm(targetName);
            return (cout << "Intern creates " << *internForm <<endl, internForm);

        default:
            throw "this form is not availabel";
            // return (internForm);
    }    
}
