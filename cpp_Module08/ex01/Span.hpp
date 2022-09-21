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
    void addRangeIterator(typename T::iterator , typename T::iterator);
};
