/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:57:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/31 01:10:02 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Dog *dog = new Dog();
	Dog *dog2 = new Dog(*dog);
	Cat *cat = new Cat();
	Cat *cat2 = new Cat(*cat);


	Animal *arry[4] = {dog, dog2, cat, cat2};

	for (int i = 0; i < 4; i++)
		arry[i]->makeSound();
	
	for (int i = 0; i < 4; i++)
		arry[i]->~Animal();
	return 0;
}