#include "ShrubberyCreationForm.h"
#include "Form.h"
#include "Bureaucrat.h"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    
}


ShrubberyCreationForm::ShrubberyCreationForm(string target):sign(145),exec(137)
{
    std::ofstream MyFile(target + "_shrubbery");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if(beSigned(executor))
        cout << "grade is height" << endl;
    
    // if(executor.getGrade() <= this->sign)
    // {
    //     is_signed = true;
    //     return is_signed;
    // }
}

 