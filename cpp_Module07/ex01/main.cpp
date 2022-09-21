/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:21:30 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/19 16:41:05 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	char arr[50];

	for(int i= 0; i < 50; i++)
		arr[i] = i + 33;
	iter(arr, 50, display);
}