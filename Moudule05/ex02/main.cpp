#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
  

// std::ostream & operator << (std::ostream &out,  Bureaucrat &c);
 
// std::ostream & operator << (std::ostream &out,   Bureaucrat &c)
// {
//     out << c.getName() << ", bureaucrat grade " << c.getGrade();
//     return out;
// } 
// std::ostream & operator << (std::ostream &out,  Form &f);
 
// std::ostream & operator << (std::ostream &out,   Form &f)
// {
//     Bureaucrat b;
//     out << f.getName() << endl;
//     out << f.get_is_signed() << endl;
//     out << f.get_grade_sign() << endl;
//     out << f.get_grade_excec() << endl;
//     out << f.beSigned(b) << endl;
//     return out;
// }
 
int main()
{
    
    ShrubberyCreationForm s("0");
     
    RobotomyRequestForm r("robot");
     

    PresidentialPardonForm p("mustapha");
   return 0;
}
 
 