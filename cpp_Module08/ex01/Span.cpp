/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:32 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/22 15:03:34 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
}

Span::Span(unsigned int N) :size(N)
{
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span & Span::operator =(const Span &other)
{
    if (this == &other)
        return (*this);
    this->size = other.size;
    this->vect = other.vect;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
    if (this->vect.size() >= this->size)
        throw MyException("you passed the max size!!");
    this->vect.push_back(nb);
}

int Span::shortestSpan()
{
    if (this->vect.size() < 2)
        throw MyException("there seems to be less than 2 stord value!");
    std::sort(this->vect.begin(), this->vect.end());
    int shortest = this->vect[1] - this->vect[0];
    for (std::vector<int>::iterator it = this->vect.begin(); it < (this->vect.end() - 1); it++)
    {
        if ( (*(it + 1 ) - *it) < shortest )
            shortest = *(it + 1 ) - *it;
    }
    return (shortest);
}

int Span::longestSpan()
{
    if (this->vect.size() < 2)
        throw MyException("there seems to be less than 2 stord value!");
    std::sort(this->vect.begin(), this->vect.end());
    return (this->vect[this->vect.size() - 1] - this->vect[0]);
}


template <class T>
void Span::addRangeIterator(typename T::iterator first , typename T::iterator last)
{
    while (first!=last)
    {
        this->vect.push_back(*first);
        ++first;
    }
}