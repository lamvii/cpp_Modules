/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:28:46 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/15 20:32:05 by ael-idri         ###   ########.fr       */
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
}
// what about .0f...