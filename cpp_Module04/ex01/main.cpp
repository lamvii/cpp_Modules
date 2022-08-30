/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:57:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/30 23:23:52 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// const Animal* meta = new Animal();
	// const Animal* dogPtr = new Dog();
	// const Animal* catPtr = new Cat();


	// std::cout << dogPtr->get_type() << " " << std::endl;
	// std::cout << catPtr->get_type() << " " << std::endl;
	// dogPtr->makeSound(); //will output the cat sound!
	// catPtr->makeSound();
	// meta->makeSound();

	const WrongAnimal* wrongcatPtr = new WrongCat();
	std::cout << wrongcatPtr->get_type() << " " << std::endl;

	wrongcatPtr->makeSound();

	// delete meta;
	// delete dogPtr;
	// delete catPtr;
	// delete wrongcatPtr;
	
	return 0;
}