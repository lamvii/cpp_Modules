/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:47:31 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/02 01:29:34 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
	private:
		string type;
	public:
		Animal();
		Animal(string);
		Animal(const Animal &copy);
		Animal &operator = (const Animal &other);
		virtual ~Animal();
		void set_type(const string);
		string get_type() const;
		virtual void	makeSound( void ) const;
};
