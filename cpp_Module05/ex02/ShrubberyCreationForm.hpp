/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:01:07 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 23:54:24 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

using std::fstream;

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(string);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();
    void beExecute() const;
};
