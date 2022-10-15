#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H


#include "Bureaucrat.h"

#include "Form.h"

class Bureaucrat;
class PresidentialPardonForm : Form
{
    private:
        int sign;
        int exec;
    public:
        virtual string getName() const;
        virtual void execute(Bureaucrat const & executor)const;
        virtual bool get_is_signed()const ;
        virtual int get_grade_sign() const;
        PresidentialPardonForm(string target);
        ~PresidentialPardonForm();
};








#endif