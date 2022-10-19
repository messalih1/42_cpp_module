#include "Bureaucrat.hpp"
#include "Form.hpp"

 
int main()
{
    try
    {
        // Bureaucrat b("b",10);
        // Bureaucrat c("ff",50);

        // c = b;

        Form form("no",5,55);
        Form f("SA",10,55);

        f = form;

        // // form.beSigned(b);
        std::cout << f.getName() << std::endl;
    }   
    // beacuse exception is the parent class and hold all child
    // in place o
    catch(std::exception & e)// because what() in class exception
    {
        std::cout << e.what() << std::endl;
    }  


}