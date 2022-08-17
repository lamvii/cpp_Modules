/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:06:25 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/17 20:19:44 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using	std::cout;
using	std::endl;
using	std::string;

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void non_availabe_level( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
			
};
