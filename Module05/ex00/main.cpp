#include "Bureaucrat.hpp"

 
int main()
{
    try
    {
        Bureaucrat b;
        // b.increment();
        std::cout << b << std::endl;

        std::cout << "============" << std::endl;

        Bureaucrat b2("abduh",50);
        b2.increment();

        std::cout << b2 << std::endl;

    }   
    catch(std::exception & e) 
    {
        std::cout << e.what() << std::endl;
    }
}