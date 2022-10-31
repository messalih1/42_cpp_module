#include "ShrubberyCreationForm.hpp"
#include<cstring>

ShrubberyCreationForm::ShrubberyCreationForm():sign(145),exec(137)
{
    std::cout << "ShrubberyCreationForm: default constructor called." << std::endl;  

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):sign(145),exec(137)
{
    std::cout << "ShrubberyCreationForm: parametrize constructor called." << std::endl;  
    target.append("_shrubbery");

    this->target = target;
}



ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj)
{
    std::cout << "ShrubberyCreationForm: copy constructor called." << std::endl; 

    sign = obj.sign;
    exec = obj.exec;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    std::cout << "ShrubberyCreationForm : copy assignement called." << std::endl;

    if(this != &obj)
    {
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getGrade_execute())
        throw GradeTooLowException();
    if(!isSigned())
    {
        std::cout << "it not signed...." << std::endl;
        return ;
    }

    std::ofstream my_file(target.c_str());//Creates and writes to files
    my_file << "          v .   ._, |_  .,"     << std::endl;
    my_file << "       `-._\\/  .  \\ /    |/_"     << std::endl;
    my_file << "      \\  _\\, y | \\//"         << std::endl;
    my_file << "     _\\_.___\\, \\/ -.\\||"    << std::endl;
    my_file << "      `7-,--.`._||  / / ,"       << std::endl;
    my_file << "       /'     `-. `./ / |/_.'"  << std::endl;
    my_file << "                 |    |//   "       << std::endl;
    my_file << "                 |_    /   "        << std::endl;
    my_file << "                 |-   |   "         << std::endl;
    my_file << "                 |   =|   "         << std::endl;
    my_file << "                 |    |   "         << std::endl;
    my_file << "-----------------/ ,  . \\--------._   "      << std::endl;

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: destructor called." << std::endl;  

}
