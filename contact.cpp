#include <iostream>
#include <string>
#include <cstring>

#include"PhoneBook.hpp"
#include <iomanip>
 
// using namespace std;

 
Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void Contact::set_values()
{
    string command;

    cout << "first name: ";
    if (!std::getline(std::cin, command))
		exit (1);
    else
        firstName = command;
    cout << "last name: ";
    if (!std::getline(std::cin, command))
		exit (1);
    else 
        lastName = command;
    cout << "nickname: ";
    if (!std::getline(std::cin, command))
		exit (1);
    else
        nickName = command;
    cout << "phone number: ";
    if (!std::getline(std::cin, command))
		exit (1);
    else
        phoneNumber = command;
    cout << "dark set: ";
    if (!std::getline(std::cin, command))
		exit (1);
    else
        darkset = command;
    check = 1;
}
string Contact::slice_str(string str)
{
    int w = 0;
    while (str[w])
        w++;
    char s[11];
    if(w > 10)
    {
        w = 0;
        while (w < 10)
        {
            s[w] = str[w];
            w++;
        }
        w--;
        s[w] = '.';
        return s;
    }
    else
        return str;
    
}
void Contact::display_contacts(int i, Contact c[])
{
    int x;
    string index;
    
    cout << " index    | firstname| lastname |  nickname" << endl;
    x = 0;
    while (x < i)
    {
        cout << "\n\n";
        c[x].firstName = slice_str(c[x].firstName);
        c[x].nickName = slice_str(c[x].nickName);
        c[x].lastName = slice_str(c[x].lastName);
        cout << x + 1 << "         |";
        std::cout << std::right << std::setw(10) << c[x].firstName << "|" ;
        std::cout << std::right << std::setw(10) << c[x].lastName << "|" ;
        std::cout << std::right << std::setw(10) << c[x].nickName  << std::endl;
        cout << "\n\n";
        x++;
    }
    int res = 0; // c_str() convert string to pointer string
    cout << "enter the index: " << endl;
    if (!std::getline(std::cin, index))
        exit (1);
    int z = 0;
    while (index[z])
    {
        if(isdigit(index[z]))
            res += 1;
        else
            res += 0;
        z++;
    }
    if (res && atoi(index.c_str()) >= 1 && atoi(index.c_str()) <= 8)
    {
        if( c[atoi(index.c_str()) - 1].check != 1)
            cout << "is empty contact." << endl;
        else
        {
            cout << "\n\n";
            cout << atoi(index.c_str()) << "         |";
            std::cout << std::right << std::setw(10) << c[atoi(index.c_str()) - 1].firstName << "|" ;
            std::cout << std::right << std::setw(10) << c[atoi(index.c_str()) - 1].lastName << "|" ;
            std::cout << std::right << std::setw(10) << c[atoi(index.c_str()) - 1].nickName  << std::endl;
            cout << "\n\n";
        }
    }
    else
        cout << "index out of range.\n";

}