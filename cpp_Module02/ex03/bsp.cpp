/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:29:20 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 18:41:12 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int point_is_in_the_right_half_plan(Point A, Point B, Point C, Point point)
{
	// first lets find lin equation : y = ax + b
	Fixed a  = (A.gety() - B.gety()) / (A.getx() - B.getx());
	Fixed b  = (A.gety() - a) * A.getx();

	// means if c is part of the half plan under the line y = ax +b ( y < ax + b)
	if (C.gety() < (a * C.getx() + b))
	{
		// they are both int same half plan
		if (point.gety() <= (a * point.getx() + b))
			return (1);
		else
			return (0);
	}
	else
	{
		if (point.gety() >= (a * point.getx()  + b))
			return (1);
		else
			return (0);
	}
	return (0);
}

bool	is_triangle(Point A, Point B, Point C)
{
	// first lets find lin equation : y = ax + b
	Fixed a  = (A.gety() - B.gety()) / (A.getx() - B.getx());
	Fixed b  = (A.gety() - a) * A.getx();

	// means if c is part of the line then its not a tiangle
	if (C.gety() == (a * C.getx() + b))
		return (false);
	return(true);
}

bool bsp( Point const A, Point const B, Point const C, Point const point)
{
	if (!is_triangle(A, B, C))
	{
		cout << "ABC is not a triangle" <<endl ;
		return (false);
	}

	int valid = 0;

	valid += point_is_in_the_right_half_plan(A , B, C, point);
	valid += point_is_in_the_right_half_plan(B , C, A, point);
	valid += point_is_in_the_right_half_plan(C , A, B, point);
	
	return (valid == 3 ? true : false);
}
