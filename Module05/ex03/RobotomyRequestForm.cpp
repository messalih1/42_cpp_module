#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm():sign(72),exec(45)
{
    std::cout << "RobotomyRequestForm: default constructor called." << std::endl;  

}

RobotomyRequestForm::RobotomyRequestForm(std::string target):sign(72),exec(45)
{
    std::cout << "RobotomyRequestForm: parametrize constructor called." << std::endl;  

    this->target = target;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj)
{
    std::cout << "RobotomyRequestForm: copy constructor called." << std::endl; 

    sign = obj.sign;
    exec = obj.exec;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    std::cout << "RobotomyRequestForm : copy assignement called." << std::endl;

    if(this != &obj)
    {
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{ 
    if(executor.getGrade() > getGrade_execute())
        throw GradeTooLowException();
    if(!isSigned())
    {
        std::cout << "it not signed...." << std::endl;
        return ;
    }
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
    std::cout << "RobotomyRequestForm: destructor called." << std::endl;  
}


