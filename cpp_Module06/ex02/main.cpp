/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:09:17 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/16 14:02:19 by ael-idri         ###   ########.fr       */
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
		cout << " The actual type of the object pointed to by arg is : A" <<endl;
	else
	{
		B* b = dynamic_cast<B*>(p);
		if (b)
			cout << " The actual type of the object pointed to by arg is : B" <<endl;
		else
		{
			C* c = dynamic_cast<C*>(p);
			if (c)
				cout << " The actual type of the object pointed to by arg is : C" <<endl;
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
		cout << " The actual type of the object pointed to by arg is : A" <<endl;
		a.~A();
	}
	catch(const std::bad_cast & bc)
	{
		try
		{
			B& b= dynamic_cast<B&>(p);
			cout << " The actual type of the object pointed to by arg is : B" <<endl;
			b.~B();
		}
		catch(const std::bad_cast & bc)
		{
			try
			{
				C& c= dynamic_cast<C&>(p);
				cout << " The actual type of the object pointed to by arg is : C" <<endl;
				c.~C();
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
	Base * a = generate();
	Base * c = generate();
	Base * b = generate();

	cout << "type of arg a is :" << endl;
	identify(a);
	identify(*a);
	cout << "type of arg b is :" << endl;
	identify(b);
	identify(*b);
	cout << "type of arg c is :" << endl;
	identify(c);
	identify(*c);

	delete a;
	delete b;
	delete c;

}