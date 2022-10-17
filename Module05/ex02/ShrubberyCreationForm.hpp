#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
        int sign;
        int exec;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & obj);
        ShrubberyCreationForm & operator = (const ShrubberyCreationForm & obj);
        ShrubberyCreationForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
}; 



#endif