#ifndef FORM_HPP
#define FORM_HPP

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
        Form(const std::string name, int grade, int g);
        Form(const Form & form);
        Form & operator = (const Form & form);
        std::string getName()const;
        int getGrade_sign()const;
        int getGrade_execute()const;
        bool isSigned()const;
        void beSigned(Bureaucrat & b); 
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        ~Form();


};




std::ostream  & operator << (std::ostream &COUT, Form & form);


#endif