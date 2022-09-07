/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:31:42 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 23:55:45 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class MyException;
class Bureaucrat;
class Form
{
    private:
		static MyException GradeTooHighException;
		static MyException GradeTooLowException;
        string target;
        const string name;
        bool _signed;
        const int _signe_grade;
        const int _signe_execute;
    public:
        Form();
        Form(string, int, int);
        Form(const Form & );
        Form &operator = (const Form & );
        virtual ~Form();
        const string &get_name() const;
        const string &get_target() const;
        void set_target(const string target);
        const bool &get_signed() const;
        const int &get_signed_grade() const;
        const int &get_signed_execute() const;
        void beSigned(Bureaucrat bcrat);
        void execute(Bureaucrat const & executor) const;
        virtual void beExecute() const = 0;
};

std::ostream  &operator << (std::ostream &os, const Form &form);
