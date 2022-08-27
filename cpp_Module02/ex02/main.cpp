/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:51:32 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 23:12:08 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed e(1);
	Fixed f(3);
	Fixed u(2.3f);
	Fixed g(0.4f);
	// Fixed u(2.123f);
	// Fixed g(2.12f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << e / f << std::endl;
	std::cout << u + g << std::endl;
	std::cout << a << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}