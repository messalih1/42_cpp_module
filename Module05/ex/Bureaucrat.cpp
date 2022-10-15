#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat():name("Default name"),grade(1)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}


int Bureaucrat::getGrade()
{
    return grade;
}

std::string Bureaucrat::getName()
{
    return name;
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

std::ostream & operator << (std::ostream & COUT, Bureaucrat & b)
{
    COUT << b.getName() << ", bureaucrat grade " <<  b.getGrade();
    return COUT;
}

void Bureaucrat::signForm()
{
    // Form form;
    
    // if(form.isSigned())
    //     std::cout <<  getName() << " signed " << form.getName() << std::endl;
    // else
    //     std::cout << getName() << " couldn't sign " << form.getName() << " because " << form.isSigned() << std::endl;
}

// Bureaucrat::~Bureaucrat()
// {
// }