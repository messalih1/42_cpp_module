#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
        int sign;
        int exec;
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm & obj);
        PresidentialPardonForm & operator = (const PresidentialPardonForm & obj);
        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};



#endif