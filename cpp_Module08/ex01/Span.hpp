/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/23 22:35:54 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class MyException: public std::exception
{
	const char *message;
	public:
	MyException(const char *msg): message(msg) {};
	const char *what() const throw()
	{
		return (message);
	}
};

class Span
{
private:
    std::vector<int> vect;
    unsigned int size;
    Span();
public:
    Span(unsigned int);
    Span(const Span &);
    Span & operator =(const Span &);
    ~Span();
    void addNumber(int);
    int shortestSpan();
    int longestSpan();

    template <class T>
    void addRangeIterator(T first , T last)
    {
        unsigned int span = last - first; 
        if (span + vect.size() > this->size)
            throw MyException("range given is out of bounds");
        while (first != last)
        {
            this->vect.push_back(*first);
            first++;
        }
    }
};
