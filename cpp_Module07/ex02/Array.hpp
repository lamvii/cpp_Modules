/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:23:38 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/22 17:47:41 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


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

template <typename T>
class Array
{
private:
	T *arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int);
	Array(const Array&);
	Array & operator =(const Array&);
	~Array();
	T& operator [](unsigned int );
	const T & operator [](unsigned int ) const;
	unsigned int size() const;
};

template <typename T>
Array<T>::Array(): arr(new T[0]()), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()) , _size(n)
{
}

template <typename T>
Array<T>::Array(const Array&copy)
{
	this->arr = new T[copy.size()]();
	this->_size = copy._size;
	for (unsigned int i = 0; i < copy.size() ; i++)
		this->arr[i] = copy.arr[i];
}

template <typename T>
Array<T> & Array<T>::operator =(const Array&other)
{
	if (this == &other)
		return (*this);
	delete [] this->arr;
	this->arr = new T[other.size()]();
	this->_size = other._size;
	for (int i = 0; i < other.size() ; i++)
		this->arr[i] = other.arr[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
T& Array<T>::operator [](unsigned int n)
{
	if (n >= this->size() || n < 0)
		throw MyException("Index is out of bounds");
	else
		return (arr[n]);
}

template <typename T>
T const & Array<T>::operator [](unsigned int n) const
{
	if (n >= this->size() || n < 0)
		throw MyException("Index is out of bounds");
	else
		return (arr[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}
