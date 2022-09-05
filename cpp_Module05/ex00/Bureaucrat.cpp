/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:54:12 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/05 01:51:09 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

MyException Bureaucrat::GradeTooHighException("GradeTooHighException");
MyException	Bureaucrat::GradeTooLowException("GradeTooLowException");

Bureaucrat::Bureaucrat()
{
	grade = 150;
}

Bureaucrat::Bureaucrat(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& )
{
	
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat& )
{
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}
