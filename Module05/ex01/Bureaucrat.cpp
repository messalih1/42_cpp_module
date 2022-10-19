#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat():name("Default name"),grade(1)
{
    std::cout << "default constructor called." << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string n, int g):name(n),grade(g)
{
    std::cout << "constructor parametarize called." << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj):name(obj.name),grade(obj.grade)
{
    std::cout << "copy constructor called." << std::endl;
    *this = obj;
}


Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj)
{
    std::cout << "copy assignement called." << std::endl;
    grade = obj.grade;
    return *this;
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
 

void Bureaucrat::signForm(const Form  &form)
{
    if(form.isSigned())
        std::cout <<  getName() << " signed " << form.getName() << std::endl;
    else
        std::cout << getName() << " couldn't sign " << form.getName() << " because " << form.isSigned() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called." << std::endl;
}