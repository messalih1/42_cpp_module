#include "Bureaucrat.hpp"
#include "Form.hpp"

 
int main()
{
    try
    {
        Bureaucrat b;
        Form form;
        form.beSigned(b);
        std::cout << form;
    }   
    catch(std::exception & e)// because what() in class exception
    {
        std::cout << e.what() << std::endl;
    }

}