/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:23:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 22:10:23 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Data
{
	int i;
public:
	Data();
	Data(int j);
	Data(const Data &);
	Data &operator = (const Data &);
	~Data();
	void	display();
};

