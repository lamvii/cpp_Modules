/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:06:49 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/25 11:13:59 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> arr1 = Array<int>(10);
	Array<char> arr2 = Array<char>(20);

try
{
	for (unsigned int i = 0; i < arr1.size(); i++)
		arr1[i] = i;
	
	for (unsigned int i = 65; i < arr2.size() + 65; i++)
		arr2[i - 65] = i;

	std::cout << "integer array containe: " << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << "arr1[" << i << "] = " << arr1[i]<< std::endl; 
	std::cout << "char array containe: " << std::endl;
	for (unsigned int i = 65; i < arr1.size() + 65; i++)
		std::cout << "arr2[" << i - 65 << "] = " << arr2[i - 65] <<std::endl;
}
catch(const std::exception& e)
{
	std::cerr << std::endl << e.what() << std::endl;
}

}