/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:05:11 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/08 22:12:31 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(string);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm & operator = (const RobotomyRequestForm &);
    ~RobotomyRequestForm();
    void beExecute() const;
};
