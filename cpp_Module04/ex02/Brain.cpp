/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:28:11 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 00:51:36 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain called default constructor " << endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "default idea";
}

Brain::Brain(string idea)
{
	cout << "Brain called constructor with arg" << endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

Brain::Brain(const Brain &copy)
{
	cout << "Brain called copy constructor " << endl;
	*this = copy;
}

Brain& Brain::operator = (const Brain &other)
{
	cout << "Brain called assignment operator " << endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	cout << "Brain called destructor " << endl;
}
