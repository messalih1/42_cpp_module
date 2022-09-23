#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"
class Bureaucrat;

class RobotomyRequestForm : public Form
{
    private:
        int sign;
        int exec;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(string target);
        virtual void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};






#endif