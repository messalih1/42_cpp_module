#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
 
 

int main()
{   
    Intern someRandomIntern;

    Form* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");// because someRandomIntern is in stack
        if(rrf == NULL)
            return (std::cout<<"NULL POINTER FOUND ."<<std::endl, 1);
        PresidentialPardonForm pres("pres");
        Bureaucrat b("Bob 3 ", 1);

        rrf->beSigned(b);// in form
        b.signForm(*rrf);

        b.executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
     
}