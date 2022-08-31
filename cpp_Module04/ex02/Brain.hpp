/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:28:08 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 00:10:52 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain
{
	private:
		string ideas[100];
	public:
		Brain();
		Brain(string);
		Brain(const Brain &copy);
		Brain& operator = (const Brain &other);
		~Brain();
};
