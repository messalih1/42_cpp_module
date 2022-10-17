#include "ShrubberyCreationForm.hpp"
#include<cstring>

ShrubberyCreationForm::ShrubberyCreationForm():sign(145),exec(137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):sign(145),exec(137)
{
    target.append("_shrubbery");

    this->target = target;
}



ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj)
{
    sign = obj.sign;
    exec = obj.exec;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    if(this != &obj)
    {
        sign = obj.sign;
        exec = obj.exec;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void)executor;

    std::ofstream my_file(target.c_str());//Creates and writes to files
    my_file << "          v .   ._, |_  .," << std::endl;
    my_file << "       `-._\\/  .  \\ /    |/_" << std::endl;
    my_file << "      \\  _\\, y | \\//" << std::endl;
    my_file << "     _\\_.___\\, \\/ -.\\||" << std::endl;
    my_file << "      `7-,--.`._||  / / ," << std::endl;
//            /'     `-. `./ / |/_.'
//                      |    |//
//                      |_    /
//                      |-   |
//                      |   =|
//                      |    |
// --------------------/ ,  . \--------._

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
