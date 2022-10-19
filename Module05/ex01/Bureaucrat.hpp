#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
 
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat & operator = (const Bureaucrat & obj);
        std::string getName();
        int getGrade();
        void increment();
        void decrement();
        void signForm(const Form & f);
        ~Bureaucrat();
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

#endif
