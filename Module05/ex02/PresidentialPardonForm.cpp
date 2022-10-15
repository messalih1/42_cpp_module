#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm(string target):sign(25),exec(5)
{
    cout << target << " has been pardoned by Zaphod Beeblebrox" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}




string PresidentialPardonForm::getName() const
{
    return "string from PresidentialPardonForm";
}

bool PresidentialPardonForm::get_is_signed()const
{
    return true;
}

int PresidentialPardonForm::get_grade_sign() const
{
    return 1;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() <= this->get_grade_sign())
        cout << "YES hight" << endl;
    else
        throw GradeTooLowException();
    if(get_grade_sign())
        cout << "is signed" << endl;
    else
        throw NotSigned();
}
