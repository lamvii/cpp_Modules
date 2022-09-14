/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:36:35 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/14 20:30:33 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

enum flags {Impossible, Printable, NonPrintable};
enum flag_index {f_char , f_int, f_float, f_double};

class Conversion
{
	private:
		char    c_char;
		int     c_int;
		float   c_float;
		double  c_double;
		int     flag[4];
	public:
		Conversion();
		Conversion(const Conversion &);
		Conversion &operator = (const Conversion &);
		~Conversion();
		void parsing(string av);
		void _guide();
		void convertFromChar();
		void convertFromInt();
		void convertFromFloat();
		void convertFromDouble();
		void display();
};
