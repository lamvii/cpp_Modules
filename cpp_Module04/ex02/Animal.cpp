/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:02:50 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 01:22:47 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
	cout << "Animal default constructor called" << endl;
	type = "default";
}

Animal::Animal(string type)
{
	cout << "Animal constructor with param called" << endl;
	this->type = type;
}

Animal::Animal(const Animal &copy)
{
	cout << "Animal copy constructor called" << endl;
	*this = copy;
}

Animal& Animal::operator = (const Animal &other)
{
	cout << "Animal assignment operator called" << endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
}

void Animal::set_type(const string type)
{
	this->type = type;
}

string Animal::get_type() const
{
	return (type);
}
