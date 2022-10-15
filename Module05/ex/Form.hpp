#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;// becuse ‘Bureaucrat’ has not been declared
class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade;
        const int grade_execute;
    public:
        Form();
        std::string getName()const;
        virtual void func() = 0;
        int getGrade_sign()const;
        int getGrade_execute()const;
        bool isSigned()const;
        void beSigned(Bureaucrat & b); 
        ~Form();

    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw()
        { 
            return "Form: Grade Too High Exception"; 
        }
    };

    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw()
        { 
            return "Form: Grade Too Low Exception"; 
        }
    };
};


std::ostream  & operator << (std::ostream &COUT, Form & form);


#endif