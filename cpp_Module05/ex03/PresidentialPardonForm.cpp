/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:27:48 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 23:55:08 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): Form("Shrubbery form", 25, 5)
{
    Form::set_target("default target");
}

PresidentialPardonForm::PresidentialPardonForm(string target): Form("Shrubbery form", 25, 5)
{
    Form::set_target(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy)
{
    this->Form::set_target(copy.get_target());
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & other)
{
    Form::operator=(other);
    this->Form::set_target(other.get_target());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beExecute() const
{
    cout << this->get_target() << " has been pardoned by Zaphod Beeblebrox." << endl;
}