#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm():sign(145),exec(137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):sign(145),exec(137)
{
    target.append("_shrubbery");
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

void ShrubberyCreationForm::func()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
