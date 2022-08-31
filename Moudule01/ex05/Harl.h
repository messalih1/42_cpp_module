#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        
    public:
        void complain( string level );
        Harl(/* args */);
        ~Harl();
};







#endif