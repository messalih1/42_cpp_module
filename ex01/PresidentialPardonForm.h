#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"
class Bureaucrat;

class PresidentialPardonForm
{
    private:
        int sign;
        int exec;
    public:
        virtual void execute(Bureaucrat const & executor) const;
        PresidentialPardonForm();
        PresidentialPardonForm(string target);
        ~PresidentialPardonForm();
};










#endif