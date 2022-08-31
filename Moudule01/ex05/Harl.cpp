#include "Harl.h"


Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
void Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << endl;
}
void Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning()
{
    cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error()
{
    cout << "This is unacceptable! I want to speak to the manager now.\n";
}


void Harl::complain(string level)
{
    void(Harl::*ptr)(void) = &Harl::debug;
    void(Harl::*ptr1)(void) = &Harl::info;
    void(Harl::*ptr2)(void) = &Harl::warning;
    void(Harl::*ptr3)(void) = &Harl::error;
    
    switch (strcmp(level.c_str(),"DEBUG"))
    {
        case 0:
            (this->*ptr)();
            break;
    }
    switch (strcmp(level.c_str(),"INFO"))
    {
        case 0:
            (this->*ptr1)();
            break;
    }
    switch (strcmp(level.c_str(),"WARNING"))
    {
        case 0:
            (this->*ptr2)();
            break;   
    }
    switch (strcmp(level.c_str(),"ERROR"))
    {
        case 0:
            (this->*ptr3)();
            break;
    }

}