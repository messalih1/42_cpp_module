#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



Intern::Intern()
{
     std::cout << "Intern: default constructor called." << std::endl;
}

Intern::Intern(const Intern & obj)
{
    (void)obj;
    std::cout << "Intern: copy constructor called." << std::endl;
}

Intern & Intern::operator = (const Intern & obj)
{
    (void)obj;
    std::cout << "Intern: assignement operator called." << std::endl;
    return *this;
}

Form * Intern::makeForm(std::string name, std::string target)
{
      
    std::string names[] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    f[0] = new ShrubberyCreationForm(target);
    f[1] = new RobotomyRequestForm(target);
    f[2] = new PresidentialPardonForm(target);
    int i = 0;
    while (name != names[i] && i < 3)
        i++;          

    (i == 3) ?  std::cout << "Intern not creates " << std::endl : std::cout << "Intern  creates " << names[i] << std::endl;
    return (i == 3) ? NULL : f[i];
}


Intern::~Intern()
{
    std::cout << "Intern: destructor called." << std::endl;
    delete f[0];
    delete f[1];
    delete f[2];
}