/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:54:12 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/05 01:23:10 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException ;



Bureaucrat::Bureaucrat()
{
	this->name = "default";
	grade = 150;
}

Bureaucrat::Bureaucrat(int grade , string name)
{
	// if (grade < 1 || grade > 150)
		// throw Bureaucrat::GradeTooHighException;
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat& other)
{

}

Bureaucrat::~Bureaucrat()
{

}
