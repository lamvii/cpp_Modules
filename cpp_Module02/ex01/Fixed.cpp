/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:49:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/20 20:27:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::Fixed(const int val)
{
	cout << "Int constructor called" << endl;
	value = val << bits;
}

Fixed::Fixed(const float val)
{
	cout << "Float constructor called" << endl;
	value = val * (1 << bits);
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
	this->value = fixed_p.value;
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	return (value);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}


float 	Fixed::toFloat( void ) const
{
	return ( ((float)value) / 256);
}

int 	Fixed::toInt( void ) const
{
	return (value >> bits);
}

std::ostream &operator << (std::ostream & os , const Fixed &fixed_p)
{
	os << fixed_p.toFloat();
	return (os);
}