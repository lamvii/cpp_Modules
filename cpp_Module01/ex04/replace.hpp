/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:33:47 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/15 19:31:58 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void	replace_file(std::fstream &infile, std::fstream &outfile ,string s1,string s2);