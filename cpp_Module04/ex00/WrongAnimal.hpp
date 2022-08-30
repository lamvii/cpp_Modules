/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:00:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 23:02:08 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
	private:
		string type;
	public:
		WrongAnimal();
		WrongAnimal(string);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator = (const WrongAnimal &other);
		~WrongAnimal();
		void set_type(const string);
		string get_type() const;
		void	makeSound( void ) const;
};
