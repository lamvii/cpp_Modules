/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:51:04 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/22 21:51:23 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
	
using std::string;
using std::cout;
using std::endl;

class Fixed
{
	private:
		int	value;
		const static int bits = 8;
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& copy);
		Fixed &operator = (const Fixed &fixed_p);
		~Fixed();
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		
		// comparison operoter overload
		bool	operator > (const Fixed& f) const;
		bool	operator < (const Fixed& f) const;
		bool	operator >= (const Fixed& f) const;
		bool	operator <= (const Fixed& f) const;
		bool	operator == (const Fixed& f) const;
		bool	operator != (const Fixed& f) const;
		
		// arithmetic operator overload
		Fixed	&operator + (const Fixed &f);
		Fixed	&operator - (const Fixed &f);
		Fixed	&operator * (const Fixed &f);
		Fixed	&operator / (const Fixed &f);
		
		//  increment/decrement opertor overload
		Fixed	operator ++( void );
		Fixed	operator ++( int );
		Fixed	operator --( void );
		Fixed	operator --( int );

		//	other overloaded function
		static Fixed	&min(Fixed &f1, Fixed &f2);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static Fixed	&max(Fixed &f1, Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator << (std::ostream & os , const Fixed &fixed_p);