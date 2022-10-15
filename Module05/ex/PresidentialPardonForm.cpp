#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(/* args */):sign(25),exec(5)
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):sign(25),exec(5)
{
    std::cout <<  target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}