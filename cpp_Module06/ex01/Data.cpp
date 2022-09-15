/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:10:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 22:10:37 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(/* args */): i(0)
{
}

Data::Data(int j): i (j)
{
}

Data::Data(const Data &copy): i (copy.i)
{
}

Data &Data::operator = (const Data &other)
{
	this->i = other.i;
	return (*this);
}

Data::~Data()
{
}

void	Data::display()
{
	cout << "Data value is :" << this->i << endl;
}
