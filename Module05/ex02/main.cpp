#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

 
int main()
{
    try {
		ShrubberyCreationForm s("0");
        Bureaucrat b("Bob 1", 100);

		s.beSigned(b);
	    b.signForm(s);

        b.executeForm(s);
		 
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        RobotomyRequestForm robot("robot");
        Bureaucrat b("Bob 2", 44);

		robot.beSigned(b);
	    b.signForm(robot);

        b.executeForm(robot);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
         
		PresidentialPardonForm pres("pres");
        Bureaucrat b("Bob 3 ", 44);

		pres.beSigned(b);
	    b.signForm(pres);

        b.executeForm(pres);

    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}