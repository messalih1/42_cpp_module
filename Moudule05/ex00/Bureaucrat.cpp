#include "Bureaucrat.h"




Bureaucrat::Bureaucrat():name("name"),grade(5)
{
    if(grade < 1)
        throw GradeTooHighException();// call class member in my class
    else if(grade > 150)
        throw GradeTooLowException();   
}
 


Bureaucrat::~Bureaucrat()
{
}


string Bureaucrat::getName()
{
    return name;
}


 
int Bureaucrat::getGrade()
{
    return grade;
}


 

void Bureaucrat::increment()
{
    grade--;
    if(grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
    grade++;
    if(grade > 150)
        throw GradeTooLowException(); 
}
