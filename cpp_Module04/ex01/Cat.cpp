/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:03:34 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 19:27:48 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	cout << "Cat default constructor called" <<endl;
}

Cat::Cat(const Cat &copy)
{
	cout << "Cat copy constructor called" << endl;
	*this = copy;
}

Cat& Cat::operator = (const Cat &other)
{
	cout << "Cat assignment operator called" << endl;
	this->set_type(other.get_type());
	return (*this);
}

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
}

void	Cat::makeSound( void ) const
{
	cout << get_type() << " : Moeww Moew !!" << endl;
}
