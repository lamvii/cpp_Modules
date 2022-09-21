#include "Span.hpp"

int main()
{
    Span sp = Span(500);

    
    try
    {
        for (int i = 0; i < 50 ; i++)
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
        }

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // test iterators...catch exception..
    
    return 0;
}