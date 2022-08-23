/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:51:01 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/22 21:51:39 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int val)
{
	value = val << bits;
}

Fixed::Fixed(const float val)
{
	value = val * (1 << bits);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& copy)
{
	// value = copy.value;
	*this = copy;
}

Fixed & Fixed::operator = (const Fixed &fixed_p)
{
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


// comparison operator overload

bool	Fixed::operator > (const Fixed& f) const
{
	return (this->toFloat() > f.toFloat());
}

bool	Fixed::operator < (const Fixed& f) const
{
	return (this->toFloat() < f.toFloat());
}

bool	Fixed::operator >= (const Fixed& f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator <= (const Fixed& f) const
{
	return (this->toFloat() <= f.toFloat());
}

bool	Fixed::operator == (const Fixed& f) const
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator != (const Fixed& f) const
{
	return (this->toFloat() != f.toFloat());
}

// arithmetic operator overload

Fixed&	Fixed::operator + (const Fixed &f)
{
	this->value = (this->toFloat() + f.toFloat()) * (1 << bits);
	return (*this);
}

Fixed&	Fixed::operator - (const Fixed &f)
{
	this->value = (this->toFloat() - f.toFloat()) * (1 << bits);
	return (*this);	
}

Fixed&	Fixed::operator * (const Fixed &f)
{
	this->value = (this->toFloat() * f.toFloat()) * (1 << bits);
	return (*this);
}

Fixed&	Fixed::operator / (const Fixed &f)
{
	this->value = (this->toFloat() / f.toFloat()) * (1 << bits);
	return (*this);
}

//  operator overload
//		++obj
Fixed	Fixed::operator ++( void )
{
	this->value += ((float) 1 /(1 << bits)) * (1 << bits);
	Fixed tem = *this;
	return(tem);
}
//		obj++
Fixed	Fixed::operator ++( int )
{
	Fixed tem = *this;
	this->value += ((float)1 /(1 << bits)) * (1 << bits);
	return(tem);
}
//		--obj
Fixed	Fixed::operator --( void )
{
	this->value -= ((float)1 / (1 >> bits)) * (1 << bits);
	Fixed tem = *this;
	return(tem);
}
//		obj--
Fixed	Fixed::operator --( int )
{
	Fixed tem = *this;
	this->value -=  ((float)1 /(1 >> bits)) * (1 << bits);
	return(tem);
}

//		other overloaded function
Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 <= f2 ? f1 : f2);
}

const Fixed&	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (f1 <= f2 ? f1 : f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 >= f2 ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 >= f2 ? f1 : f2);
}


std::ostream &operator << (std::ostream & os , const Fixed &fixed_p)
{
	os << fixed_p.toFloat();
	return (os);
}
