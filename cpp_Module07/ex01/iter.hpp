/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:21:33 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/23 14:56:43 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename  T>
void iter( T arr[], int size, void (*func) (T))
{
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename  T>
void iter(T const  arr[], int size, void (*func) (const T &))
{
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void display(T i)
{
	std::cout << i << std::endl;
}