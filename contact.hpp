#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <cstring>
 
#include "contact.hpp"
 

class Contact
{
    private:
 
        std::string firstName;
        std::string  lastName; 
        std::string nickName;
        std::string    phoneNumber;
        std::string    darkset;
        int check = 0;
    
    public:
        void set_values();
        void display_contacts(int i, Contact obj[]);
        std::string slice_str(std::string str);
        Contact();
        ~Contact();
};





#endif