/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:36 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/26 15:38:58 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

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
            throw std::out_of_range("range given pass the bounds");
        while (first != last)
        {
            this->vect.push_back(*first);
            first++;
        }
    }
};
