/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:04:25 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/06 23:54:58 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(string);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &);
    ~PresidentialPardonForm();
    void beExecute() const;
};
