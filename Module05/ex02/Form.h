#ifndef FORM_H
#define FORM_H


#include "Bureaucrat.h"
// #include "Form.h"

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
    virtual string getName() const = 0;
    virtual void execute(Bureaucrat const & executor) const = 0;
    bool get_is_signed() ;// remove pure from here
    virtual int get_grade_sign() const = 0;
    // virtual int get_grade_excec() const = 0;
    // virtual bool beSigned(Bureaucrat &b) = 0;
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
    class NotSigned : public std::exception{

        const char * what() const throw()
        {
            return "Form: is not sigmed";
        }
    };


};













#endif