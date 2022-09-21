#pragma once 

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
int easyfind (T container, int integer)
{
    typename T::iterator it;
    it = std::find<typename T::iterator ,int>(container.begin(), container.end(), integer);
    if (it != container.end())
    std::cout << "Element found in container: " << *it << '\n';
  else
    std::cout << "Element not found in container\n";
    return (*it);
}