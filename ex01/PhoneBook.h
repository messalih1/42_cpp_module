#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
 

 
using  std::cout;
using  std::endl;
using  std::string;

class PhoneBook{
    private:
        Contact contacts[8];

    public:
        void create_new_contact();
        void display_contacts(int index);

};












#endif