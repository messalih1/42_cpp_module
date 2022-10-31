#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat():name("Default name"),grade(1)
{
    std::cout << "Bureaucrat: default constructor called." << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string n, int g):name(n),grade(g)
{
    std::cout << "Bureaucrat: constructor parametarize called." << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj):name(obj.name)
{
    std::cout << "Bureaucrat: copy constructor called." << std::endl;
    grade = obj.grade;
}


Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj) 
{
    std::cout << "Bureaucrat: operator assignement called." << std::endl;
    
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    
    grade = obj.grade;
    return *this;
}

int Bureaucrat::getGrade()const
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

const char * Bureaucrat::GradeTooHighException::what () const throw()
{
    return "Bureaucrat: Grade Too High Exception";
}

const char * Bureaucrat::GradeTooLowException::what () const throw()
{
    return "Bureaucrat: Grade Too Low Exception";
}
 

void Bureaucrat::signForm(const Form  &form)
{
    if(form.isSigned() == true)
        std::cout <<  getName() << " signed " << form.getName() << std::endl;
    else
        std::cout << getName() << " couldn't sign " << form.getName() << " because his grade is too low." << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{ 
    if(form.isSigned() == false)
    {
        std::cout << "it not signed...." << std::endl;
        return ;
    }
    if(getGrade() > form.getGrade_execute())
        throw GradeTooLowException();
    form.execute(*this);
    std::cout << name << " Executed " << form.getName() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat: destructor called." << std::endl;
}
 
