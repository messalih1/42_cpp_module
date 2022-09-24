#ifndef FORM_H
#define FORM_H


#include "Bureaucrat.h"
#include "Form.h"

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
    bool get_is_signed();
    int get_grade_sign() const;
    int get_grade_excec() const;
    void beSigned(Bureaucrat &b);
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