/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 00:21:10 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat sama(140, "sama");
	Form form("zdiyad" , 149, 0);
	Form form2("zawaj" , 9, 0);

	form.beSigned(sama);
	// form2.beSigned(sama);
	cout << "end test" << endl;
}