/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:30:35 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 20:33:07 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(): c_char('\0'), c_int(0), c_float(0.0f), c_double(0.0)
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
	this->display();
}

void Conversion::convertFromInt()
{
	if (flag[f_int] == Impossible)
	{
		flag[f_char] = flag[f_float] = flag[f_double] = flag[f_int];
	}
	else
	{
		c_char = static_cast<char>(c_int);
		if (c_int < 0 || c_int > 255)
			flag[f_char] = Impossible;
		else if (c_int > 32 && c_int < 127)
			flag[f_char] = Printable;
		else
			flag[f_char] = NonPrintable;
		c_float = static_cast<float>(c_int);
			flag[f_float] = Printable;
		c_double = static_cast<double>(c_int);
			flag[f_double] = Printable;
	}
	this->display();
	// case int impossible --> char impos(non sense) --> float double impos(non sense)
}

void Conversion::convertFromFloat()
{
	if (flag[f_float] == Impossible)
	{
		flag[f_char] = flag[f_int] = flag[f_double] = flag[f_float];
	}
	else if (c_float == std::numeric_limits<float>::infinity() || c_float == -std::numeric_limits<float>::infinity() || std::isnan(c_float))
	{
		flag[f_char] = flag[f_int] = Impossible;
		c_double = static_cast<double>(c_float);
			flag[f_double] = Printable;
	}
	else
	{
		c_char = static_cast<char>(c_float);
		if (c_float < 0 || c_float >= 256)
			flag[f_char] = Impossible;
		else if (c_float >= 31 && c_float < 127)
			flag[f_char] = Printable;
		else
			flag[f_char] = NonPrintable;
		c_int = static_cast<int>(c_float);
		if (c_float > (float)(INT_MAX) + 1 || c_float < INT_MIN)
			flag[f_int] = Impossible;
		else 
			flag[f_int] = Printable;
		c_double = static_cast<double>(c_float);
			flag[f_double] = Printable;
	}
	this->display();
	// case float impossible nan -inf ..
}

void Conversion::convertFromDouble()
{
	if (flag[f_double] == Impossible)
	{
		flag[f_char] = flag[f_int] = flag[f_float] = flag[f_double];
	}
	else if (c_double == std::numeric_limits<double>::infinity() || c_double == -std::numeric_limits<double>::infinity() || std::isnan(c_double))
	{
		flag[f_char] = flag[f_int] = Impossible;
		c_float = static_cast<double>(c_double);
		flag[f_float] = Printable;
	}
	else
	{
		c_char = static_cast<char>(c_double);
		if (c_double < 0 || c_double >= 256)
			flag[f_char] = Impossible;
		else if (c_double >= 31 && c_double < 127)
			flag[f_char] = Printable;
		else
			flag[f_char] = NonPrintable;
		c_int = static_cast<int>(c_double);
		if (c_double > (float)(INT_MAX) + 1 || c_double < INT_MIN)
			flag[f_int] = Impossible;
		else
			flag[f_int] = Printable;
		c_float = static_cast<float>(c_double);
		if (c_double > std::numeric_limits<float>::max() || c_double < -std::numeric_limits<float>::max())
			flag[f_float] = Impossible;
		else
			flag[f_float] = Printable;
	}
	this->display();
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
		flag[f_char] = Printable;
		this->convertFromChar();
	}
	else if (!av.compare("nan"))
	{
		c_double = std::numeric_limits<double>::quiet_NaN();
		flag[f_double] = Printable;
		this->convertFromDouble();
	}
	else if (!av.compare("nanf"))
	{
		c_float = std::numeric_limits<float>::quiet_NaN( );
		flag[f_float] = Printable;
		this->convertFromFloat();
	}
	else if (!av.compare("inf") || !av.compare("+inf"))
	{
		c_double = std::numeric_limits<double>::infinity();
		flag[f_double] = Printable;
		this->convertFromDouble();
	}
	else if (!av.compare("-inf"))
	{
		c_double = -std::numeric_limits<double>::infinity();
		flag[f_double] = Printable;
		this->convertFromDouble();
	}
	else if (!av.compare("inff") || !av.compare("+inff"))
	{
		c_float = std::numeric_limits<float>::infinity();
		flag[f_float] = Printable;
		this->convertFromFloat();
	}
	else if (!av.compare("-inff"))
	{
		c_float = -std::numeric_limits<float>::infinity();
		flag[f_float] = Printable;
		this->convertFromFloat();
	}
	else if (av[i] == '+' || av[i] == '-' || isdigit(av[i]))
	{
		ss << av[i++];
		for (; i < (int)av.length() && isdigit(av[i]); i++)
			ss << av[i];
		if (!av[i])
		{
			ss >> c_long;
			c_int = static_cast<int>(c_long);
			if (c_long > std::numeric_limits<int>::max() || c_long < INT_MIN)
				flag[f_int] = Impossible;
			else
				flag[f_int] = Printable;
			this->convertFromInt();
		}
		else if (av[i] == '.')
		{
			ss << av[i++];
			for (; i < (int)av.length() && isdigit(av[i]); i++)
				ss << av[i];
			if (!av[i])
			{
				ss >> c_ldouble;
				c_double = static_cast<double>(c_ldouble);
				if (c_ldouble > std::numeric_limits<double>::max() || c_ldouble < -std::numeric_limits<double>::max())
					flag[f_double] = Impossible;
				else
					flag[f_double] = Printable;
				this->convertFromDouble();
			}
			else if ((av[i] == 'f' || av[i] == 'F') && !av[i + 1])
			{
				ss >> c_double;
				c_float = static_cast<float>(c_double);
				if (c_double > std::numeric_limits<float>::max() || c_double < -std::numeric_limits<float>::max())
					flag[f_float] = Impossible;
				else
					flag[f_float] = Printable;
				this->convertFromFloat();
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

void Conversion::display()
{
	if (flag[f_char] == Impossible)
		cout << "char	:	Impossible" << endl;
	else if (flag[f_char] == NonPrintable)
		cout << "char	:	Non displayable" << endl;
	else
		cout << "char	:	" << c_char << endl;
	if (flag[f_int] == Impossible)
		cout << "int	:	Impossible" << endl; 
	else
		cout << "int	:	" << c_int << endl;
	if (flag[f_float] == Impossible)
		cout << "float	:	Impossible" << endl;
	else if (std::isnan(c_float))
		cout << "float	:	nanf" << endl;
	else if (c_float == std::numeric_limits<float>::infinity())
		cout << "float	:	inff" << endl;
	else if (c_float == -std::numeric_limits<float>::infinity())
		cout << "float	:	-inff" << endl;
	else
		cout << "float	:	" << std::fixed  << std::setprecision(1) << c_float  << "f"<< endl;
	if (flag[f_double] == Impossible)
		cout << "double	:	Impossible" << endl;
	else
		cout << "double	:	" << std::fixed << std::setprecision(1) << c_double << endl;
}
