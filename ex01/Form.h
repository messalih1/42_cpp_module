#ifndef FORM_H
#define FORM_H


#include "Bureaucrat.h"

#include <iostream>

#include <cstring>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::cin;
class Bureaucrat;

class Form 
{
private:
    const   string  name;
    bool            is_signed;
    const   int     grade_sign;
    const   int     grade_excec;

public:
    Form();
    string getName() const;
    bool get_is_signed(Bureaucrat const &b);
    int get_grade_sign() const;
    int get_grade_excec() const;
    bool beSigned(Bureaucrat const &b) const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    ~Form();

    class GradeTooHighException : public std::exception{

        const char * what() const throw()
        {
            return "Form: is Grade Too High ";
        }
    };
    class GradeTooLowException : public std::exception{

        const char * what() const throw()
        {
            return "Form: is Grade Too low";
        }
    };


};













#endif