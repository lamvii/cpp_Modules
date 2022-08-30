/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 19:27:42 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class  Cat:public Animal
{
	
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator = (const Cat &other);
		~Cat();
		void	makeSound( void ) const;
};
