#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm():sign(25),exec(5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj)
{
    sign = obj.sign;
    exec = obj.exec;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    if(this != &obj)
    {   
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::cout <<  target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}