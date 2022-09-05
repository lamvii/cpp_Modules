/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/05 17:41:16 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat sama(160);
		Bureaucrat kamas(-2);
	}
	catch(std::exception &e)
	{
		cout << e.what() <<endl;
	}
}