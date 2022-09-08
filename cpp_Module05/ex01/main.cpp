/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:38:23 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/08 21:38:54 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat sama(140, "sama");
	Form form("zdiyad" , 149, 1);
	Form form2("zawaj" , 9, 1);

	sama.signForm(form);
	sama.signForm(form2);
	cout << "end test" << endl;
}