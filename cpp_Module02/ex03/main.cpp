/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:53:59 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/23 18:48:03 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const A, Point const B, Point const C, Point const point);

int main()
{
	Point A( 3, 10);
	Point B( 1, 5);
	Point C( 20, 5);

	Point point( 30, 20);

	if (bsp(A, B, C, point))
		cout << "point is inside triangle" << endl;
	else
		cout << "point is outside triangle" << endl;
}