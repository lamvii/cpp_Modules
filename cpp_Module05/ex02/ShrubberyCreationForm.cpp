/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:24:51 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/07 21:30:48 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery request", 145, 137)
{
    Form::set_target("default target");
}

ShrubberyCreationForm::ShrubberyCreationForm(string target): Form("Shrubbery request", 145, 137)
{
    Form::set_target(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy)
{
    this->Form::set_target(copy.get_target());
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & other)
{
    Form::operator=(other);
    this->Form::set_target(other.get_target());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beExecute() const
{
    string fileName = this->get_target() + "_shrubbery";
    fstream file(fileName, fstream::out);
    if (!file.is_open())
    {
        cout << "opening " << fileName <<" is  failled" << endl;
		return ;
    }
    file << "                                                         ." << endl;
    file << "                                              .         ;  " << endl;
    file << "                 .              .              ;%     ;;   " << endl;
    file << "                   ,           ,                :;%  %;   " << endl;
    file << "                    :         ;                   :;%;'     .,   " << endl;
    file << "           ,.        %;     %;            ;        %;'    ,;" << endl;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
    file << "                    `:%;.  :;bd%;          %;@%;'" << endl;
    file << "                      `@%:.  :;%.         ;@@%;'   " << endl;
    file << "                        `@%.  `;@%.      ;@@%;         " << endl;
    file << "                          `@%%. `@%%    ;@@%;        " << endl;
    file << "                            ;@%. :@%%  %@@%;       " << endl;
    file << "                              %@bd%%%bd%%:;     " << endl;
    file << "                                #@%%%%%:;;" << endl;
    file << "                                %@@%%%::;" << endl;
    file << "                                %@@@%(o);  . '         " << endl;
    file << "                                %@@@o%;:(.,'         " << endl;
    file << "                            `.. %@@@o%::;         " << endl;
    file << "                               `)@@@o%::;         " << endl;
    file << "                                %@@(o)::;        " << endl;
    file << "                               .%@@@@%::;         " << endl;
    file << "                               ;%@@@@%::;.          " << endl;
    file << "                              ;%@@@@%%:;;;. " << endl;
    file << "                          ...;%@@@@@%%:;;;;,..    " << endl;
    file.close();
}
