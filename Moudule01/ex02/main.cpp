#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
 

using std::string;
using std::cout;
using std::endl;

int main()
{
    string   str;
    string *stringPTR;

    str = "HI THIS IS BRAIN";
    
    stringPTR = &str;
    string &stringREF = str;

    cout << &str << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << str << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;
}