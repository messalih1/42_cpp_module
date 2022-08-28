#include "PhoneBook.h"
#include "Contact.h"


#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
 

 
using  std::cout;
using  std::endl;
using  std::string;

void PhoneBook::display_contacts(int index)
{
    int i;
    int x;
    string input;

    i = 0;
    if(index == 0)
    {
        cout << "phone book is empty, create contacts." << endl;
        return ;
    }
    cout << "  index   " << "|" << "first name" << "|" << " last name" << "|" << "nick name " << endl;
    while (i < index)
    {
        contacts[i].print_contacts(i);
        i++;
    }
    cout << "enter index of your contact:" << endl;
    
    std::getline(std::cin,input);
    x = atoi(input.c_str()); // return 0 if not digit
    if(x == 0)
        cout << "you should enter valid number\n";    
    else if(x > index)
        cout << "out of range\n";
    else
        contacts[x - 1].print_contact();
}

void PhoneBook::create_new_contact( )
{
    string user_input;
    int index;
    
    cout << "The program only accepts ADD, SEARCH or EXIT" << endl;
    index = 0;
    while(std::getline(std::cin,user_input))
    {
        if(strcmp(user_input.c_str(),"ADD") == 0)
        {
            contacts[index].set_contact();
            index++;
            if(index > 7)
                index = 7;
        }
        else if(strcmp(user_input.c_str(),"SEARCH") == 0)
            display_contacts(index);
        else if(strcmp(user_input.c_str(),"EXIT") == 0)
            break;
        else if(user_input.empty())
        {
            while (user_input.empty())
            {
                cout << "can’t have empty fields" << endl;
                std::getline(std::cin,user_input);
                if(strcmp(user_input.c_str(),"EXIT") == 0)
                    break;
                if(strcmp(user_input.c_str(),"ADD") == 0)
                {
                    contacts[index].set_contact();
                    index++;
                    if(index > 7)
                        index = 7;
                }
                else if(strcmp(user_input.c_str(),"SEARCH") == 0)
                    display_contacts(index);
            }
        }
        cout << "The program only accepts ADD, SEARCH or EXIT" << endl;
    }
}

