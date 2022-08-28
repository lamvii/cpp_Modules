/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 18:16:59 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator = (const Dog &other);
		~Dog();
};

Dog::Dog() : Animal("Dog")
{
	cout << "Dog default constructor called" <<endl;
}

Dog::Dog(const Dog &copy)
{
	cout << "Dog copy constructor called" <<endl;
	*this = copy;
}

Dog& Dog::operator = (const Dog &other)
{
	cout << "Dog assignment operator called" <<endl;
	this->set_type(other.get_type());
	return (*this);
}

Dog::~Dog()
{
	cout << "Dog destructor called" <<endl;
}
