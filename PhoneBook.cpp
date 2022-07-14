#include <iostream>
#include <string>
#include <cstring>

#include"PhoneBook.hpp"
  
// using namespace std;
 
 
PhoneBook::PhoneBook() 
{ 
}

PhoneBook::~PhoneBook()
{
}


 
void PhoneBook::creat_contact()
{
    int i;
    string command;

    i = 0;
    cout << "enter one of three commands: " << endl;
    cout << "     ADD: save a new contact." << endl;
    cout << "     SEARCH: display a specific contact" << endl;
    cout << "     EXIT: EXIT the program." << endl;
    cout << ">";

    while (command != "EXIT")
    {
        if (!std::getline(std::cin, command))
            exit (1);

        if (command.compare(0, 4, "ADD") == 0)
		{
            c[i].set_values();
            i++;
        }  
        else if (command.compare(0, 7, "SEARCH") == 0)
		{
            if(i == 0)
                cout << "no contact, add contacts.\n";
            else
                c[0].display_contacts(i,c);
            
        }
        else
            std::cout << "Warning : invalid input. " << std::endl;        
        cout << "enter one of three commands: " << endl;
        cout << "     ADD: save a new contact." << endl;
        cout << "     SEARCH: display a specific contact" << endl;
        cout << "     EXIT: EXIT the program." << endl;
        cout << ">";
    }
}
