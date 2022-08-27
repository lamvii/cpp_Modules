/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:50:57 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 20:02:48 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) :x(x), y(y)
{
}

Point::Point(const Point &copy): x(copy.x) , y(copy.y)
{
}

//you cant change a const memember
Point & Point::operator =(const Point &copy)
{
	(void)copy;
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getx()
{
	return (x);
}

Fixed  Point::gety()
{
	return (y);
}
