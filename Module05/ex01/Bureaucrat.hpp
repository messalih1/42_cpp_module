#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstring>

#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        std::string getName();
        int getGrade();
        void increment();
        void decrement();
        void signForm();
        Bureaucrat();
        // ~Bureaucrat();
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