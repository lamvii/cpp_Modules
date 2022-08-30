/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:01:13 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 23:03:09 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal default constructor called" << endl;
	type = "default";
}

WrongAnimal::WrongAnimal(string type)
{
	cout << "WrongAnimal constructor with param called" << endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &other)
{
	cout << "WrongAnimal assignment operator called" << endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called" << endl;
}

void WrongAnimal::set_type(const string type)
{
	this->type = type;
}

string WrongAnimal::get_type() const
{
	return (type);
}

void	WrongAnimal::makeSound( void ) const
{
	cout << "hmmm what sound shold I make !!" << endl;
}