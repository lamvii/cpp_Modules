/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:03:14 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 23:04:20 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class  WrongCat:public WrongAnimal
{
	
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator = (const WrongCat &other);
		~WrongCat();
		void	makeSound( void ) const;
};
