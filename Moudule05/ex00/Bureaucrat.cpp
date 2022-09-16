#include "Bureaucrat.h"




Bureaucrat::Bureaucrat():name("name"),grade(1)
{
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


void Bureaucrat::GradeTooHighException()
{
    // if(getGrade() > 10)

}


int Bureaucrat::increment()
{
    int     i;

    i = 0;
    while (i < 10)
    {
        grade++;
        i++;
    }
    return grade;
}

int Bureaucrat::decrement()
{
    int     i;

    i = 0;
    while (i < 10)
    {
        grade--;
        i++;
    }
    return grade;
}
