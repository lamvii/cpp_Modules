/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:36:31 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 19:58:24 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
	
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	// value = copy.value;
	*this = copy;
}

Fixed & Fixed::operator = (const Fixed &fixed_p)
{
	cout << "Copy assignment operator called " << endl;
	this->value = fixed_p.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return (value);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}
