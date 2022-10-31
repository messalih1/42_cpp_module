#ifndef INTERN_HPP
#define INTERN_HPP


#include "Bureaucrat.hpp"
#include "Form.hpp"
class Intern  
{
     Form *f[3];
     public:
          Intern();
          Intern(const Intern & obj);
          Intern & operator = (const Intern & obj);
          Form * makeForm(std::string name, std::string target);
          ~Intern();
};
 

#endif