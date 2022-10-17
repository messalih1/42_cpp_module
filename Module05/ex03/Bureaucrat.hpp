#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstring>
#include <cstdlib>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        std::string getName();
        int getGrade()const;
        void increment();
        void decrement();
        void signForm(Form & form);
        void executeForm(Form const & form);
        Bureaucrat();
    //    virtual ~Bureaucrat();
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw()
        { 
            return "Grade Too High Exception"; 
        }
    };

    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw()
        { 
            return "Grade Too Low Exception"; 
        }
    };
};



std::ostream  & operator << (std::ostream &COUT, Bureaucrat & b);

std::ostream & operator << (std::ostream & COUT, Bureaucrat & b);





#endif