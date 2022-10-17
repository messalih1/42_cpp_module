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
          rrf = someRandomIntern.makeForm("Presidentia lPardonForm", "Bender");
          delete rrf;
     }
     catch(const std::exception& e)
     {
          std::cout << e.what() << '\n';
     }
     
}