#pragma once

#include <iostream>
#include <stack> 


template <class T>
class MutantStack : public std::stack<T> 
{
public:
    MutantStack();
    MutantStack(const MutantStack &);
    MutantStack & operator = (const MutantStack &);
    ~MutantStack();
};

MutantStack::MutantStack(/* args */)
{
}

MutantStack::~MutantStack()
{
}
