/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:03:17 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 23:05:18 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	cout << "WrongCat default constructor called" <<endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	cout << "WrongCat copy constructor called" << endl;
	*this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat &other)
{
	cout << "WrongCat assignment operator called" << endl;
	this->set_type(other.get_type());
	return (*this);
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called" << endl;
}

void	WrongCat::makeSound( void ) const
{
	cout << get_type() << " : Moeww Moew !!" << endl;
}
