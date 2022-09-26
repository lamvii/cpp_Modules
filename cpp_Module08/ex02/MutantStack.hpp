/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:51 by ael-idri          #+#    #+#             */
/*   Updated: 2022/09/26 13:08:02 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <vector>


template <class T, class Cont = std::deque<T> >
class MutantStack : public std::stack<T, Cont>
{
    public:
        typedef typename std::stack<T, Cont>::container_type::iterator iterator;

        // typedef MutantStack::container_type::
        MutantStack(): std::stack<T, Cont>() {};
        MutantStack(const MutantStack &co): std::stack<T, Cont>(co) {};
        MutantStack & operator = (const MutantStack &o)
        {
            if (this == &o)
                return (*this);
            std::stack<T, Cont>::operator = (o);
            return (*this);
        };

        ~MutantStack(){};

        iterator begin() { return (this->c.begin()); };
        iterator end() { return (this->c.end()); };
        // void    
        
};
