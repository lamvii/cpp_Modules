/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:04:15 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/04 17:07:19 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
	cout << "Dog default constructor called" << endl;
	brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	cout << "Dog copy constructor called" << endl;
	*this = copy;
}

Dog& Dog::operator = (const Dog &other)
{
	cout << "Dog assignment operator called" << endl;
	if (this == &other)
		return (*this);
	this->set_type(other.get_type());
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	*(this->brain) = *(other.brain);
	// this->brain = other.brain;
	return (*this);
}

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
	delete brain;
}

void	Dog::makeSound( void ) const
{
	cout << get_type() << " : Baark Bark B.. !!" << endl;
}
