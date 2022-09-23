#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"



ShrubberyCreationForm::ShrubberyCreationForm(string target):sign(145),exec(137)
{
    std::ofstream MyFile(target + "_shrubbery");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}




string ShrubberyCreationForm::getName() const
{
    return "string from ShrubberyCreationForm";
}

bool ShrubberyCreationForm::get_is_signed()const
{
    return true;
}

int ShrubberyCreationForm::get_grade_sign() const
{
    return 1;
}

// bool Form::beSigned(Bureaucrat &b)
// {
//     if(b.getGrade() <= this->grade_sign)
//     {
//         is_signed = true;
//         return is_signed;
//     }
//     else
//         throw GradeTooLowException();
     
// }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() <= sign)
        cout << "YES hight" << endl;
    else
        throw GradeTooLowException();
    if(get_grade_sign())
        cout << "is signed" << endl;
    else
        throw NotSigned();
    
}



