#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm():sign(72),exec(45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):sign(72),exec(45)
{
    this->target = target;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj)
{
    sign = obj.sign;
    exec = obj.exec;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    if(this != &obj)
    {
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    (void)executor;

    std::cout << "ZZZZZZZZZZZ" << std::endl;

    srand(time(NULL));
   
    int r = rand() % 2;

    if(r==0)
        std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << target << "  the robotomy failed." << std::endl;
}



    

RobotomyRequestForm::~RobotomyRequestForm()
{
}


