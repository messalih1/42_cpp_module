#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

#include "Contact.h"
#include "PhoneBook.h"

//because include using namespace std you will include all of fuctions of std, it is bad practice
 
using std::left;
using std::right;

#include <iomanip>
using std::setw;
using  std::cout;
using  std::endl;
using  std::string;

using std::cin;

//  Client Code



/*

the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.

 first name, 
 last name,
  nickname,
   phone number, and
darkest secret. A saved contact can’t have empty fields
A saved contact can’t have empty fields.
*/


int main(int argc, char *argv[])
{

    PhoneBook phonebook;
    
    phonebook.create_new_contact();
   

    return 0;
}