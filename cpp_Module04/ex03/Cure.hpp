/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:54:57 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:01:57 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{	
	public:
		Cure();
		Cure(const Cure& copy);
		Cure& operator = (const Cure &other);
		~Cure();
		Cure* clone() const;
		void use(ICharacter& target);
};
