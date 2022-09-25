#include "Intern.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


Intern::Intern()
{
    
    
}


Form * Intern::makeForm(string name , string target)
{
    int j;
    string n;

    string arr[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};

    // forms[0] is an instance from ShrubberyCreationForm
    forms[0] = new ShrubberyCreationForm("shrubbry");
    forms[1] = new RobotomyRequestForm("Robotomy");
    forms[2] = new PresidentialPardonForm("Presidential");
   

    
    j = 0;
    while (arr[j] != name && j < 3)
        j++;
    arr[j] == name ? n = "Intern creates " + arr[j]  : n = "intern not exist";
    cout << n << endl;
    return *forms;
}   






Intern::~Intern()
{
    delete forms[0];
    delete forms[1];
    delete forms[2];
}