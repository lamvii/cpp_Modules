/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:08:07 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/18 00:08:19 by ael-idri         ###   ########.fr       */
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
