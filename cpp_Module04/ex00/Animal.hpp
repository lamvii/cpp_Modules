/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:47:31 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 18:17:17 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
	private:
		string type;
	public:
		Animal();
		Animal(string);
		Animal(const Animal &copy);
		Animal &operator = (const Animal &other);
		~Animal();
		void set_type(const string);
		string get_type() const;
};

Animal::Animal()
{
	cout << "Animal default constructor called" <<endl;
	type = "default";
}

Animal::Animal(string type)
{
	cout << "Animal constructor with param called" <<endl;
	this->type = type;
}

Animal::Animal(const Animal &copy)
{
	cout << "Animal copy constructor called" <<endl;
	*this = copy;
}

Animal& Animal::operator = (const Animal &other)
{
	cout << "Animal assignment operator called" <<endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	cout << "Animal destructor called" <<endl;
}

void Animal::set_type(const string type)
{
	this->type = type;
}

string Animal::get_type() const
{
	return (type);
}