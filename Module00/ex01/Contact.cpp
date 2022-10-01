#include "Contact.h"

#include "PhoneBook.h"


Contact::Contact()
{
}


 
int Contact::first_name()
{
    std::cout << "enter your first name: " << std::endl; 
    
    std::getline(std::cin,firstName);
        
    if (std::cin.eof()==1)
        return 0;
    if(firstName.empty())
    {
        while (firstName.empty())
        {
            std::cout << "can't have empty fields" << std::endl;
            std::getline(std::cin,firstName);
            if (std::cin.eof()==1)
                return 0;
        }
    }
    return 1;
}
 
int Contact::last_name()
{
    std::cout << "enter your last name: " << std::endl;    
    std::getline(std::cin,lastName);
    if (std::cin.eof()==1)
        return 0;
    if(lastName.empty())
    {
        while (lastName.empty())
        {
            std::cout << "can't have empty fields" << std::endl;
            std::getline(std::cin,lastName);
            if (std::cin.eof()==1)
                return 0;
        }
    }
    return 1;
}
 
int Contact::nick_name()
{
    std::cout << "enter your nick name: " << std::endl;    
    std::getline(std::cin,nickname);
    if (std::cin.eof()==1)
        return 0;
    if(nickname.empty())
    {
        while (nickname.empty())
        {
            std::cout << "can't have empty fields" << std::endl;
            std::getline(std::cin,nickname);
            if (std::cin.eof()==1)
                return 0;
        }
    }
    return 1;

}
 
int Contact::phone_number()
{
    std::cout << "enter your phone number " << std::endl;    
    std::getline(std::cin,phoneNumber);
    if (std::cin.eof()==1)
        return 0;
    if(phoneNumber.empty())
    {
        while (phoneNumber.empty())
        {
            std::cout << "can't have empty fields" << std::endl;
            std::getline(std::cin,phoneNumber);
            if (std::cin.eof()==1)
                return 0;
        }
    }
    return 1;

}
 
int Contact::darkest_secret()
{
    std::cout << "enter your darkest secret: " << std::endl;    
    std::getline(std::cin,darkestSecret);
    if (std::cin.eof()==1)
        return 0;
    if(darkestSecret.empty())
    {
        while (darkestSecret.empty())
        {
            std::cout << "can't have empty fields" << std::endl;
            std::getline(std::cin,darkestSecret);
            if (std::cin.eof()==1)
                return 0;
            if(strcmp(darkestSecret.c_str(),"EXIT") == 0)
                exit(0) ;
        }
    }
    return 1;
}
 
int Contact::set_contact()
{ 

    if(!first_name())
        return 0;
    if(!last_name())
        return 0;
    if(!nick_name())
        return 0;
    if(!phone_number())
        return 0;
    if(!darkest_secret())
        return 0;
    return 1;
}



void Contact::print_contacts(int index)
{
    if(firstName.length() > 10)
    {
        firstName.resize(9);
        firstName.append(".");
    }
    if(lastName.length() > 10)
    {
        lastName.resize(9);
        lastName.append(".");
    }
    if(nickname.length() > 10)
    {
        nickname.resize(9);
        nickname.append(".");
    }
    
    std::cout << std::setw(10) <<  index + 1 << "|";
    std::cout  << std::setw(10) << firstName << "|";
    std::cout << std::setw(10) << lastName << "|";
    std::cout << std::setw(10) << nickname << std::endl; 
} 
void Contact::print_contact( )
{
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
    std::cout << nickname << std::endl; 
    std::cout << phoneNumber << std::endl;
    std::cout << darkestSecret << std::endl;
}

Contact::~Contact()
{
}