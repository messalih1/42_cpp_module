#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
 
 

class Contact
{
    
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    int first_name();
    int last_name();
    int nick_name();
    int phone_number();
    int darkest_secret();
        


    public:
        int set_contact();
        void print_contacts(int index);
        void print_contact();
        Contact();
        ~Contact();
};

















#endif