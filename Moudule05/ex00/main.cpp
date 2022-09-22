#include "Bureaucrat.h"
#include "Form.h"

 
std::ostream & operator << (std::ostream &out,  Bureaucrat &c);
 
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