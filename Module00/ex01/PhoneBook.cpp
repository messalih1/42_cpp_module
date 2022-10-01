#include "PhoneBook.h"
#include "Contact.h"



void PhoneBook::display_contacts(int index)
{
    int i;
    int x;
    std::string input;

    i = 0;
    if(index == 0)
    {
        std::cout << "phone book is empty, create contacts." << std::endl;
        return ;
    }
    std::cout << "  index   " <<  "|" << "first name" << "|" << " last name" << "|" << "nick name " << std::endl;
    while (i < index)
    {
        contacts[i].print_contacts(i);
        i++;
    }
    std::cout << "enter index of your contact:" << std::endl;
    
    std::getline(std::cin,input);
    x = atoi(input.c_str()); // return 0 if not digit
    if(x == 0)
        std::cout << "you should enter valid number\n";    
    else if(x > index || x < 0)
        std::cout << "out of range\n";
    else
        contacts[x - 1].print_contact();
}

void PhoneBook::create_new_contact( )
{
    std::string user_input;
    int index;
    int i;
    
    std::cout << "The program only accepts ADD, SEARCH or EXIT" << std::endl;
    index = 0;
    i = 0;
    while(std::getline(std::cin,user_input))
    {
        if(strcmp(user_input.c_str(),"ADD") == 0)
        {
            if(!contacts[i].set_contact())
                return;
            index++;
            if (index > 7)
                i = index % 8;
            else
                i++;
        }
        else if(strcmp(user_input.c_str(),"SEARCH") == 0)
        {
            if(index > 7)
                index = 8;
            display_contacts(index);
        }
        else if(strcmp(user_input.c_str(),"EXIT") == 0)
            break;
        else if(user_input.empty())
        {
            while (user_input.empty())
            {
                std::cout << "can't have empty fields" << std::endl;
                std::getline(std::cin,user_input);
                if (std::cin.eof()==1)
                    return ;
                if(strcmp(user_input.c_str(),"EXIT") == 0)
                    break;
                if(strcmp(user_input.c_str(),"ADD") == 0)
                {
                    if (i > 7)
                        i = i % 8;
                    if(!contacts[i].set_contact())
                        return;
                    index++;
                    if (index > 7)
                        i = index % 8;
                    else
                        i++;
                }
                else if(strcmp(user_input.c_str(),"SEARCH") == 0)
                    display_contacts(i);
            }
        }
        std::cout << "The program only accepts ADD, SEARCH or EXIT" << std::endl;
    }
}

