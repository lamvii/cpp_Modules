/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:36:35 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/13 22:46:41 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <limits>

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

Conversion::Conversion(): c_int(0), c_char('\0'), c_double(0.0), c_float(0.0f)
{
}

Conversion::Conversion(const Conversion & copy)
{
	*this = copy;
}

Conversion& Conversion::operator = (const Conversion &other)
{
	if (this == &other)
		return (*this);
	this->c_int = other.c_int;
	this->c_char = other.c_char;
	this->c_float = other.c_float;
	this->c_double = other.c_double;
	for(int i=0; i < 4; i++)
		this->flag[i] = other.flag[i];
	return (*this);
}


Conversion::~Conversion()
{
}

void Conversion::_guide(void)
{
	cout << "invalide argument to convert pls enter somthing like : $> ./conversion <Typeliteral> " <<endl;
	cout << "char literals  : 'c', 'a', ..." <<endl;
	cout << "int literals   : 0, -42, 42..." <<endl;
	cout << "float literals : 0.0f, -4.2f, 4.2f, nanf, -inff, inff..." <<endl;
	cout << "double literals: 0.0, -4.2, 4.2, nan, -inf, +inf..." <<endl;
}

void Conversion::parsing(string av)
{
	std::stringstream ss;
	long c_long;
	long double c_ldouble;
	int i = 0;


	if (!isdigit(av[0]) && av.length() == 1)
	{
		this->c_char = av[0];
		cout << c_char << endl;
	}
	else if (!av.compare("nan"))
	{
		c_double = nan("");
		cout << c_double;
	}
	else if (!av.compare("nanf"))
	{
		c_float = nanf("");
		cout << c_float;
	}
	else if (!av.compare("inf") || !av.compare("+inf"))
	{
		c_double = std::numeric_limits<double>::infinity();
		cout << c_double;
	}
	else if (!av.compare("-inf"))
	{
		c_double = -std::numeric_limits<double>::infinity();
		cout << c_double;
	}
	else if (!av.compare("inff") || !av.compare("+inff"))
	{
		c_float = std::numeric_limits<float>::infinity();
		cout << c_float;
	}
	else if (!av.compare("-inff"))
	{
		c_float = -std::numeric_limits<float>::infinity();
		cout << c_float;
	}
	else if (av[i] == '+' || av[i] == '-' || isdigit(av[i]))
	{
		ss << av[i++];
		for (; i < av.length() && isdigit(av[i]); i++)
			ss << av[i];
		if (!av[i])
		{
			ss >> c_long;
			c_int = static_cast<int>(c_long);
			if (c_long > std::numeric_limits<int>::max() || c_long < std::numeric_limits<int>::lowest())
				flag[f_int] = Impossible;
			cout << c_int << endl;
		}
		else if (av[i] == '.')
		{
			ss << av[i++];
			for (; i < av.length() && isdigit(av[i]); i++)
				ss << av[i];
			if (!av[i])
			{
				ss >> c_ldouble;
				c_double = static_cast<double>(c_ldouble);
				if (c_ldouble > std::numeric_limits<double>::max() || c_ldouble < std::numeric_limits<double>::lowest())
					flag[f_double] = Impossible;
				cout << c_double << c_ldouble << endl;
			}
			else if ((av[i] == 'f' || av[i] == 'F') && !av[i + 1])
			{
				ss >> c_double;
				c_float = static_cast<float>(c_double);
				flag[f_float] = Printable;
				cout << c_double << c_float << endl;
			}
			else
				this->_guide();
		}
		else
			this->_guide();
	}
	else
		this->_guide();
}

void Conversion::convertFromChar()
{
	if (c_char > 32 && c_char < 127)
		flag[f_char] = Printable;
	else
		flag[f_char] = NonPrintable;
	c_int = static_cast<int>(c_char);
		flag[f_int] = Printable;
	c_float = static_cast<float>(c_char);
		flag[f_float] = Printable;
	c_double = static_cast<double>(c_char);
		flag[f_double] = Printable;
}

void Conversion::convertFromInt()
{
	c_char = static_cast<char>(c_int);
	if (c_int < 0 && c_int > 255)
		flag[f_char] = Impossible;
	else if (c_int > 32 && c_int < 127)
		flag[f_char] = Printable;
	else
		flag[f_char] = NonPrintable;
	c_float = static_cast<float>(c_int);
		flag[f_float] = Printable;
	c_double = static_cast<double>(c_int);
		flag[f_double] = Printable;
	// case int impossible
}

void Conversion::convertFromFloat()
{
	c_char = static_cast<char>(c_float);
	if (c_float < 0 && c_float >= 256)
		flag[f_char] = Impossible;
	else if (c_float >= 31 && c_float < 127)
		flag[f_char] = Printable;
	else
		flag[f_char] = NonPrintable;
	c_int = static_cast<int>(c_float);
	if (c_float >= std::numeric_limits<int>::max() + 1 || c_float < std::numeric_limits<int>::lowest())
		flag[f_int] = Printable;
	else 
		flag[f_int] = Impossible;
	c_double = static_cast<double>(c_float);
		flag[f_double] = Printable;
	// case float impossible nan -inf ..
}

void Conversion::convertFromDouble()
{
	c_char = static_cast<char>(c_double);
	if (c_double < 0 && c_double >= 256)
		flag[f_char] = Impossible;
	else if (c_double >= 31 && c_double < 127)
		flag[f_char] = Printable;
	else
		flag[f_char] = NonPrintable;
	c_int = static_cast<int>(c_double);
	if (c_float >= std::numeric_limits<int>::max() + 1 || c_float < std::numeric_limits<int>::lowest())
		flag[f_int] = Printable;
	else
		flag[f_int] = Impossible;
	c_float = static_cast<float>(c_double);
	if (c_float >= std::numeric_limits<float>::max() + 1 || c_float < std::numeric_limits<float>::lowest())
		flag[f_float] = Printable;
	else
		flag[f_float] = Impossible;
}

// display data :) 