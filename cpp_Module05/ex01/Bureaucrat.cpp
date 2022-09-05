/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:54:12 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 00:27:59 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

MyException Bureaucrat::GradeTooHighException("Bureaucrat :GradeTooHighException");
MyException	Bureaucrat::GradeTooLowException("Bureaucrat :GradeTooLowException");

Bureaucrat::Bureaucrat(): name("default")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(int grade, string _name): name(_name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name) , grade(copy.grade)
{
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const string & Bureaucrat::getName() const
{
	return (this->name);
}

const int & Bureaucrat::getGrade() const
{
	return (this->grade);
}

Bureaucrat &Bureaucrat::operator++(int)
{
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException;
	this->grade--;
	return (*this);
}

Bureaucrat &Bureaucrat::operator--(int)
{
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException;
	this->grade++;
	return(*this);
}

std::ostream & operator << (std::ostream &os, const Bureaucrat &Bcrat)
{
	os << Bcrat.getName() << ", bureaucrat grade " << Bcrat.getGrade();
	return (os);
}


void Bureaucrat::signForm(Form &form)
{
	if (form.get_signed())
		cout << *this << " signed " << form << endl;
	else
		cout << *this << " couldn’t sign " << form  << "because  reason" <<endl;
}