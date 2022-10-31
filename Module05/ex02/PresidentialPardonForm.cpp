#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm():sign(25),exec(5)
{
    std::cout << "PresidentialPardonForm: default constructor called." << std::endl;  

}

PresidentialPardonForm::PresidentialPardonForm(std::string target):sign(25),exec(5)
{
    this->target = target;
    std::cout << "PresidentialPardonForm: parametrize constructor called." << std::endl;  
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj)
{
    std::cout << "PresidentialPardonForm: copy constructor called." << std::endl; 

    sign = obj.sign;
    exec = obj.exec;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    std::cout << "PresidentialPardonForm : copy assignement called." << std::endl;

    if(this != &obj)
    {   
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getGrade_execute())
        throw GradeTooLowException();
    if(isSigned() == false)
    {
        std::cout << "it not signed...." << std::endl;
        return ;
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: destructor called." << std::endl;  
}