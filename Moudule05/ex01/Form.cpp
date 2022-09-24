#include "Bureaucrat.h"
#include "Form.h"






Form::Form():name("Form"),is_signed(false),grade_sign(6),grade_excec(0)
{
    if(grade_sign > 150)
        throw GradeTooHighException();
    else if(grade_sign < 0)
        throw GradeTooLowException();
    if(grade_excec > 150)
        throw GradeTooHighException();
    else if(grade_excec < 0)
        throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() <= this->grade_sign)
        is_signed = true;
    else
        throw GradeTooLowException();
}

bool Form::get_is_signed()
{
    return is_signed;
}

string Form::getName() const
{
    return this->name;
}
int Form::get_grade_sign() const
{
    return this->grade_sign;
}
int Form::get_grade_excec() const
{
    return this->grade_excec;
}


Form::~Form()
{
}


