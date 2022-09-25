#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


RobotomyRequestForm::RobotomyRequestForm(string target):sign(72),exec(45)
{
    this->target = target;

    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}



string RobotomyRequestForm::getName() const
{
    return "string from RobotomyRequestForm";
}


bool RobotomyRequestForm::get_is_signed()const
{
    return true;
}

int RobotomyRequestForm::get_grade_sign() const
{
   return 1;
}



void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() <= this->get_grade_sign())
    {

        cout << "YES hight" << endl;
    }
    else
        throw GradeTooLowException();
    // if(this->is_signed)
    //     cout << "is signed" << endl;
    // else
    //     throw NotSigned();
}

