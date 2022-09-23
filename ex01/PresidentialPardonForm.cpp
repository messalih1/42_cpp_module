#include "PresidentialPardonForm.h"







PresidentialPardonForm::PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(string target):sign(25),exec(5)
{
    cout << target << " has been pardoned by Zaphod Beeblebrox" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

}