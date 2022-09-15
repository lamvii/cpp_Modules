/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:09:17 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 22:42:45 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			return (NULL);
			break;
	}
}

void identify(Base* p)
{
	A* a = dynamic_cast<A *>(p);
	if (a)
		cout << " The actual type of the object pointed to by p is : A" <<endl;
	else
	{
		B* b = dynamic_cast<B*>(p);
		if (b)
			cout << " The actual type of the object pointed to by p is : B" <<endl;
		else
		{
			C* c = dynamic_cast<C*>(p);
			if (c)
				cout << " The actual type of the object pointed to by p is : C" <<endl;
			else
				cout << "something wrong happend !!" <<endl;
		}
	}
}

void identify(Base& p)
{
	try
	{
		A& a= dynamic_cast<A&>(p);
		cout << " The actual type of the object pointed to by p is : A" <<endl;
	}
	catch(const std::bad_cast & bc)
	{
		try
		{
			B& b= dynamic_cast<B&>(p);
			cout << " The actual type of the object pointed to by p is : B" <<endl;
		}
		catch(const std::bad_cast & bc)
		{
			try
			{
				C& c= dynamic_cast<C&>(p);
				cout << " The actual type of the object pointed to by p is : C" <<endl;
			}
			catch(const std::bad_cast& bc)
			{
				cout << "something wrong happend !!" <<endl;
			}
		}
	}
}

int main(void)
{
	
}