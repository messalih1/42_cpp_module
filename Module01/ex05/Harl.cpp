#include "Harl.h"



Harl::Harl()
{
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl; 
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

 

void Harl::complain( std::string level )
{
    Harl *p;

    void(Harl::*ptr[4])() = {
        
            &Harl::debug, 
            &Harl::info,
            &Harl::warning,
            &Harl::error
        };
    std::string expressions[] = {"debug","info","warning","error"};
    int expression;
    int i;
    for (i = 0; expressions[i] != level && i < 4; i++)
    {
    }
    expression = i;
    switch (expression)
    {
        case 0:
            (p->*ptr[0])();
            break;
        case 1:
            (p->*ptr[1])();
            break;
        case 2:
            (p->*ptr[2])();
            break;
        case 3:
            (p->*ptr[3])();
            break;
        default:
            break;
    }
}


// Harl::~Harl()
// {
// }