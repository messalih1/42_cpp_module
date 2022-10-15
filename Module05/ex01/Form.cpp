#include "Form.hpp"



Form::Form():name("unknow"),sign(true),grade(1),grade_execute(1)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    if(grade_execute < 1)
        throw GradeTooHighException();
    else if(grade_execute > 150)
        throw GradeTooLowException();   
}
 
int Form::getGrade_execute()const
{
    return grade_execute;
}

int Form::getGrade_sign()const
{
    return grade;
}

bool Form::isSigned()const
{
    return true;
}

std::string Form::getName()const
{
    return name;
}


void Form::beSigned(Bureaucrat & b)
{
    if(b.getGrade() <= grade)
        sign = true;
    else
        throw GradeTooLowException();
}


std::ostream & operator << (std::ostream & COUT, Form & f)
{
    COUT << "name: " << f.getName() << std::endl;
    COUT <<  "grade sign: " << f.getGrade_sign() << std::endl;
    COUT << "grade execute: "  << f.getGrade_execute() << std::endl;
    COUT << "if is signed: "  << f.isSigned() << std::endl;
    return COUT;
}

Form::~Form()
{
}
