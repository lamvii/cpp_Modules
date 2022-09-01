/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:26:28 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/01 17:52:45 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

using std::string;
using std::cout;
using std::endl;

class ICharacter;
class AMateria
{
	protected:
	string type;
	
	public:
	
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual AMateria& operator= (const AMateria& other);
	virtual ~AMateria();

	string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
