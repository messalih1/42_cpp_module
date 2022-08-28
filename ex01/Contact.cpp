#include "Contact.h"

// Implementation File


#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
 

 using std::left;
using std::right;

#include <iomanip>
using std::setw;
using  std::cout;
using  std::endl;
using  std::string;

using std::cin;


Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

 
void Contact::first_name()
{
    cout << "enter your first name: " << endl;    
    std::getline(std::cin,firstName);
    
    if(firstName.empty())
    {
        while (firstName.empty())
        {
            cout << "can’t have empty fields" << endl;
            std::getline(std::cin,firstName);
            if(strcmp(firstName.c_str(),"EXIT") == 0)
                exit(0) ;
        }
    }
    else if(strcmp(firstName.c_str(),"EXIT") == 0)
        exit(0) ;
}
 
void Contact::last_name()
{
    cout << "enter your last name: " << endl;    
    std::getline(std::cin,lastName);
    
    if(lastName.empty())
    {
        while (lastName.empty())
        {
            cout << "can’t have empty fields" << endl;
            std::getline(std::cin,lastName);
            if(strcmp(lastName.c_str(),"EXIT") == 0)
                exit(0) ;
        }
    }
    else if(strcmp(lastName.c_str(),"EXIT") == 0)
        exit(0) ;
}
 
void Contact::nick_name()
{
    cout << "enter your nick name: " << endl;    
    std::getline(std::cin,nickname);
    
    if(nickname.empty())
    {
        while (nickname.empty())
        {
            cout << "can’t have empty fields" << endl;
            std::getline(std::cin,nickname);
            if(strcmp(nickname.c_str(),"EXIT") == 0)
                exit(0) ;

        }
    }
    else if(strcmp(nickname.c_str(),"EXIT") == 0)
        exit(0) ;
}
 
void Contact::phone_number()
{
    cout << "enter your phone number " << endl;    
    std::getline(std::cin,phoneNumber);
    
    if(phoneNumber.empty())
    {
        while (phoneNumber.empty())
        {
            cout << "can’t have empty fields" << endl;
            std::getline(std::cin,phoneNumber);
            if(strcmp(phoneNumber.c_str(),"EXIT") == 0)
                exit(0) ;
        }
    }
    else if(strcmp(phoneNumber.c_str(),"EXIT") == 0)
        exit(0) ;
}
 
void Contact::darkest_secret()
{
    cout << "enter your darkest secret: " << endl;    
    std::getline(std::cin,darkestSecret);
    
    if(darkestSecret.empty())
    {
        while (darkestSecret.empty())
        {
            cout << "can’t have empty fields" << endl;
            std::getline(std::cin,darkestSecret);
            if(strcmp(darkestSecret.c_str(),"EXIT") == 0)
                exit(0) ;
        }
    }
    else if(strcmp(darkestSecret.c_str(),"EXIT") == 0)
        exit(0) ;
}
 
void Contact::set_contact()
{ 

    first_name();
    last_name();
    nick_name();
    phone_number();
    darkest_secret();
    
}

/*
 if (str.length() > width)
        if (show_ellipsis)
            return str.substr(0, width) + ...;
*/


void Contact::print_contacts(int index)
{
 
    if(firstName.length() > 10)
    {
        firstName.resize(10);
        firstName.append(".");
    }
    if(lastName.length() > 10)
    {
        lastName.resize(10);
        lastName.append(".");
    }
    if(nickname.length() > 10)
    {
        nickname.resize(9);
        nickname.append(".");
    }
    
    cout << setw(10) <<  index + 1 << "|";
    cout  << setw(10) << firstName << "|";
    cout << setw(10) << lastName << "|";
    cout << setw(10) << nickname << endl; 
} 
void Contact::print_contact( )
{
    cout << firstName << endl;
    cout << lastName << endl;
    cout << nickname << endl; 
    cout << phoneNumber << endl;
    cout << darkestSecret << endl;
} 