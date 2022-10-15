#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.h"

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
    private:
        string target;
        int sign;
        int exec;
        
        
    public:
        virtual string getName() const;
        virtual void execute(Bureaucrat const & executor)const;
         bool get_is_signed()const ;
        virtual int get_grade_sign() const;

        ShrubberyCreationForm(string target);
        ~ShrubberyCreationForm();
};










#endif