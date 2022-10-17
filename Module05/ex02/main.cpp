#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

 
int main()
{
     

	Bureaucrat b; 

	ShrubberyCreationForm	shru("abduh");
	RobotomyRequestForm Robot("Robot");
	PresidentialPardonForm Presi("Peri");
	
	try
	{ 
		std::cout << b << std::endl;
		shru.beSigned(b);
	 
		Robot.beSigned(b);
		Robot.execute(b); 
	}
	catch(std::exception& e)
	{
		std::cout << "Bureaucrat " << e.what() << '\n';
	}


}