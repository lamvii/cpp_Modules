/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 00:00:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/08 21:36:21 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

MyException Form::GradeTooHighException("Form :GradeTooHighException");
MyException	Form::GradeTooLowException("Form :GradeTooLowException");

Form::Form() : name("default form"), _signed(false), _signe_grade(150),
    _signe_execute(0)
{
}

Form::Form(string name, int grade, int execute): name(name), _signed(false),
    _signe_grade(grade), _signe_execute(execute)
{
    if (grade < 1 || execute < 1)
		throw Form::GradeTooHighException;
	if (grade > 150 || execute > 150)
		throw Form::GradeTooLowException;
}

Form::Form(const Form & copy): name(copy.name), _signed(false),
    _signe_grade(copy._signe_grade), _signe_execute(copy._signe_execute)
{
}

Form &Form::operator = (const Form & other)
{
    this->_signed = other._signed;
    return (*this);
}

Form::~Form()
{
}

const string& Form::get_name() const
{
    return (name);
}

const string &Form::get_target() const
{
    return (target);
}

void Form::set_target(const string target)
{
    this->target = target;
}

const bool &Form::get_signed() const
{
    return (_signed);
}

const int &Form::get_signed_grade() const
{
    return (_signe_grade);
}

const int &Form::get_signed_execute() const
{
    return (_signe_execute);
}

void Form::beSigned(Bureaucrat bcrat)
{
    if (bcrat.getGrade() <= this->get_signed_grade())
        this->_signed = true;
    else
        throw Form::GradeTooLowException;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (!this->get_signed())
        throw ("this form  NotSigned");
    else if (executor.getGrade() <= this->get_signed_execute())
        this->beExecute();
    else
        throw Form::GradeTooLowException;
}

std::ostream  &operator << (std::ostream &os, const Form &form)
{
    cout << form.get_name() << " form that required grade " << form.get_signed_grade() << " to besigne and grade " << form.get_signed_execute() << " to execute, now  the form is :";
    if (form.get_signed())
        cout << "SIGNED. ";
    else
        cout << "NOT SIGNED, ";
    return (os);
}