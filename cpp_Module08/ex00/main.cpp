/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:14 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/23 19:56:29 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myvector;
    std::vector<int> const &myvector2 = myvector;

    myvector.push_back(10);
    myvector.push_back(11);
    myvector.push_back(12);
    myvector.push_back(13);
    myvector.push_back(14);


    std::cout << "The contents of vector: ";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
        std::cout << myvector[it - myvector.begin()] << ' ';
    std::cout << std::endl;
    
    easyfind< std::vector<int> >(myvector, 13);
    easyfind< std::vector<int> >(myvector2, 13);
    
    
    const std::list<int> mylist(myvector.begin(), myvector.end());
    
    std::cout << "The contents of list: ";
    for (std::list<int>::const_iterator it = mylist.begin(); it != mylist.end(); it++)
        std::cout << *it << ' ';
    
    std::cout << std::endl;

    easyfind< std::list<int> >(mylist, 12);
    
}
