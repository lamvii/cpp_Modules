/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:41:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/11 01:02:07 by ael-idri         ###   ########.fr       */
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
		void	announce( void );	
};
