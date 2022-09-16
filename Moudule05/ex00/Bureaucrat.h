#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H


#include <iostream>

#include <cstring>

using std::cout;
using std::endl;
using std::string;
using std::cin;


 

class Bureaucrat
{
    private:
        string const name;
        int         grade;
    public:
        void GradeTooHighException();
        void GradeTooLowException();    
        string    getName();
        int    getGrade();
        int ç();
        int decrement();
        Bureaucrat(/* args */);
        ~Bureaucrat();
};







#endif