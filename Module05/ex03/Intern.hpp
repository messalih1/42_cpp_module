#ifndef INTERN_HPP
#define INTERN_HPP


#include "Bureaucrat.hpp"
#include "Form.hpp"
class Intern  
{
     public:
          Intern(/* args */);
          Form * makeForm(std::string name, std::string target);
          ~Intern();
};
 

#endif