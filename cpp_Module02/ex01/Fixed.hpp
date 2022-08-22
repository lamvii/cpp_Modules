/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:49:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/20 16:48:29 by ael-idri         ###   ########.fr       */
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
};

std::ostream &operator << (std::ostream & os , const Fixed &fixed_p);