/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:13:08 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/05 01:23:03 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

using std::string;
using std::cout;
using std::endl;

class MyException: public std::exception
{
	const char *message;
	public:
	MyException(const char *msg): message(msg) {};
	const char *what() const throw()
	{
		return (message);
	}
};

class Bureaucrat
{
	private:
		const string name;
		int grade;
		static MyException GradeTooHighException;
		static MyException GradeTooLowException;
	public:
		Bureaucrat();
		Bureaucrat(int grade, string name);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat & operator = (const Bureaucrat& other);
		~Bureaucrat();
};


