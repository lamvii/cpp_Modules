/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:31:42 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 00:14:05 by ael-idri         ###   ########.fr       */
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
        const string name;
        bool _signed;
        const int _signe_grade;
        const int _signe_execute;
    public:
        Form();
        Form(string, int, int);
        Form(const Form & );
        Form &operator = (const Form & );
        ~Form();
        const string &get_name() const;
        const bool &get_signed() const;
        const int &get_signed_grade() const;
        const int &get_signed_execute() const;
        void beSigned(Bureaucrat bcrat);
};

std::ostream  &operator << (std::ostream &os, const Form &form);
