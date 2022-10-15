#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm():sign(72),exec(45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):sign(72),exec(45)
{
    std::cout << target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


