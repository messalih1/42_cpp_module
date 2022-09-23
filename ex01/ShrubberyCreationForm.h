#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "Form.h"
class Bureaucrat;

class ShrubberyCreationForm :  public Form
{
    private:
        int sign;
        int exec;
    public:
        ShrubberyCreationForm(string target);
        ShrubberyCreationForm();
        virtual void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};













#endif