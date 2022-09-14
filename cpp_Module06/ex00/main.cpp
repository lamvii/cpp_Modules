/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:28:46 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/14 20:22:36 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    Conversion conv;

    if (ac != 2)
    {
        conv._guide();
        return (1);
    }
    conv.parsing(av[1]);
    conv.display();
}