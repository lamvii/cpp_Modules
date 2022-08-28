/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/27 18:16:21 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class  Cat:public Animal
{
	
	public:
		Cat(/* args */);
		Cat(const Cat &copy);
		Cat &operator = (const Cat &other);
		~Cat();
};

Cat::Cat() : Animal("Cat")
{
	cout << "Cat default constructor called" <<endl;
}

Cat::Cat(const Cat &copy)
{
	cout << "Cat copy constructor called" <<endl;
	*this = copy;
}
Cat& Cat::operator = (const Cat &other)
{
	cout << "Cat assignment operator called" <<endl;
	this->set_type(other.get_type());
	return (*this);
}

Cat::~Cat()
{
	cout << "Cat destructor called" <<endl;
}
