#include "RobotomyRequestForm.h"





RobotomyRequestForm::RobotomyRequestForm()
{
    
}



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


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

}
