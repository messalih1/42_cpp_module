#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
 
class RobotomyRequestForm : public Form
{
    private:
        int sign;
        int exec;
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & obj);
        RobotomyRequestForm & operator = (const RobotomyRequestForm & obj);
        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};








#endif