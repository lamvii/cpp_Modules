/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:25:25 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 23:54:19 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): Form("Shrubbery form", 72, 45)
{
    Form::set_target("default target");
}

RobotomyRequestForm::RobotomyRequestForm(string target): Form("Shrubbery form", 72, 45)
{
    Form::set_target(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy)
{
    this->Form::set_target(copy.get_target());
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & other)
{
    Form::operator=(other);
    this->Form::set_target(other.get_target());
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::beExecute() const
{
    int j = 0;
    cout << "[ some drilling noises ]: $#%#$%$% ----v vvvvv ^&$&$ " << endl;
    for (int i = 0; i < 10; i++)
        j += rand() % 2;
    if (j > 5)
        cout << this->get_target() <<" has been robotomized successfully 50% of the time." << endl;
    else
        cout << this->get_target() <<" robotomized failed." << endl;
}
