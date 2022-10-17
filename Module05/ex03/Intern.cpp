#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



Intern::Intern(/* args */)
{
}

Form * Intern::makeForm(std::string name, std::string target)
{
      
     std::string names[] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};

     Form *f[3] = {new ShrubberyCreationForm(target),new RobotomyRequestForm(target),new PresidentialPardonForm(target)};
     int i = 0;
     while (name != names[i] && i < 3)
          i++;
          

     (i == 3) ?  std::cout << "Intern not creates " << std::endl : std::cout << "Intern  creates " << f[i]->getName() << std::endl;
     return (i == 3) ? NULL : f[i];
}


Intern::~Intern()
{
}