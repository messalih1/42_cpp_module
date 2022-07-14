#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <cstring>

#include "contact.hpp"
 
using namespace std;
 
class PhoneBook
{
    private:
        Contact c[8];     
    public:
        void creat_contact();
   


    PhoneBook();
    ~PhoneBook();
};




#endif
