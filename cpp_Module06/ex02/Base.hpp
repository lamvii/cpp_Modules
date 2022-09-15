/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:09:50 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 22:20:48 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{
	cout << "Base destructor" <<endl;
}
