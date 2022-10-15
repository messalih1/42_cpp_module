#include "Bureaucrat.hpp"

 
int main()
{
    try
    {
        Bureaucrat b;
        b.increment();
        std::cout << b << std::endl;
    }   
    catch(std::exception & e)// because what() in class exception
    {
        std::cout << e.what() << std::endl;
    }



    
}