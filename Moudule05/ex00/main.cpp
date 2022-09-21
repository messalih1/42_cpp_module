#include "Bureaucrat.h"

 
/*
    Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
    either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException
*/



std::ostream & operator << (std::ostream &out, const Bureaucrat &c);
 
std::ostream & operator << (std::ostream &out,   Bureaucrat &c)
{
    
    out << c.getName() << ", bureaucrat grade " << c.getGrade();
    return out;
}
 
int main()
{
    try
    {
       Bureaucrat c1;
        cout << c1;

    }
    catch(std::exception &e)
    {
        cout << e.what();
    }
  
   return 0;
}