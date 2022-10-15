#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
    private:
        int sign;
        int exec;
    public:
        ShrubberyCreationForm();

        ShrubberyCreationForm(std::string target);
        void func();
        
        ~ShrubberyCreationForm();
}; 



#endif