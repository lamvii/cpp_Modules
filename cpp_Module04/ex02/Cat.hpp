/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 00:47:58 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class  Cat:public Animal
{
	Brain * brain;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator = (const Cat &other);
		~Cat();
		void	makeSound( void ) const;
};
