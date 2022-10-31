#include "Bureaucrat.hpp"
#include "Form.hpp"

 
int main()
{
    try
    {
        Form f;

        Bureaucrat b;

        // b.decrement();

        f.beSigned(b);
        b.signForm(f);

        std::cout << b << std::endl;
        std::cout << "==============================" << std::endl;

        Form form("abduh",100,50);
        
        Bureaucrat bu("mustapha",111);

        form.beSigned(bu);
        
        bu.signForm(form);


        std::cout << form << std::endl;

        // destructor destroy first of b and f if not throw execption
    }   
    catch(std::exception & e) 
    {
        std::cout << e.what() << std::endl;
    }  


}