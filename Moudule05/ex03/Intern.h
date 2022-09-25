#ifndef INTERN_H
#define INTERN_H

#include "Form.h" 

class Intern
{
    private:
        Form *forms[3];
        
        
    public:
        Form * makeForm(string name, string target);
        Intern();
        ~Intern();
};

















#endif