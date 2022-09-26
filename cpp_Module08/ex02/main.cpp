/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:43 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/26 13:56:49 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <algorithm>


// template <typename T, class Cont = std::vector<T>> class stack {
// 	Cont<T> c;
// public;
// 	typedef Cont::iterator iterator;
// 	typedef Cont container_type;
// 	void push(int x) {
// 		vec.c(x);
// 	};
// 	iterator begin() {
// 		return c.begin();
// 	}
// };


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// test MutantStack with algoritms 

	std::cout<< std::endl << "test MutantStack with algoritms:" << std::endl;

	MutantStack<int> s2(mstack);

	std::cout << "sort stack with iterators" << std::endl;

	std::sort(s2.begin(), s2.end());
	it = s2.begin();
	ite = s2.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "fill stack  with other values" << std::endl;

	std::fill(s2.begin(), s2.end(), 25);
	it = s2.begin();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}

// int main()
// {
// 	MutantStack<int, std::vector<int> > mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
// 	MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int, std::vector<int> > s(mstack);
// 	return 0;
// }