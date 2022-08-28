#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
 

 
using  std::cout;
using  std::endl;
using  std::string;

// header file of class

class Contact
{
    
    string firstName;
    string lastName;
    string nickname;
    string phoneNumber;
    string darkestSecret;

    void first_name();
    void last_name();
    void nick_name();
    void phone_number();
    void darkest_secret();
        


    public:
        void set_contact();
        void print_contacts(int index);
        void print_contact();
        Contact(/* args */);
        ~Contact();
};

















#endif