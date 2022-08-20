/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:36:35 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/20 13:08:55 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
	
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
		Fixed(const Fixed& copy);
		Fixed &operator = (const Fixed &contact);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
