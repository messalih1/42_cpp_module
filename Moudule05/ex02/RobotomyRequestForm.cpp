#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


RobotomyRequestForm::RobotomyRequestForm(string target):sign(72),exec(45)
{
    cout << "Annoying Sounds ......" << endl;
    if(sign > 0)
        cout << target << " has been robotomized successfully 50% of the time." << endl;
    else
        cout << "the robotomy failed." << endl;
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

