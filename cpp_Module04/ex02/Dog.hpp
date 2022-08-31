/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:26 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 00:47:56 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	Brain *brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator = (const Dog &other);
		~Dog();
		void	makeSound( void ) const;
};
