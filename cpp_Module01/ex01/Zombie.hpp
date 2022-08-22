/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:41:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/20 21:23:57 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie();
		~Zombie();
		void	set_name(std::string name);
		void	announce( int val );	
};
   