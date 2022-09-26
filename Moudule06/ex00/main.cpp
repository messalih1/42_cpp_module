#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <math.h>
#include <iomanip>


using std::cout;
using std::endl;
using std::string;


int is_valid(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] == '.')// 10.5885f
        {
            i++;
            while(str[i] && (isdigit(str[i]) || str[i] == 'f'))
            {
                if(str[i] == 'f')
                {
                    i++;
                    if(str[i] == '\0')
                        return 11;
                    else
                        return 10;
                }
                i++;
            }
            if(str[i] == '\0')
                return 11;
            else
                return 10;
        }
        else if(str[i] == 'f')
            return 10;
        i++;
    }
    return 1;
}


void call_cast_float(std::string num)
{
    cout << num << endl;
}


void call_cast(std::string num)
{
    cout << num << endl;

}



// // 10.f is valid
int main(int ac, char *argv[])
{
    // >= 0 && <= 15 NON PRINTABLE CHARACTERS

    if(ac == 2)
    {
        std::string num;
        int i;

        num = argv[1];
        i = 0;

        if(num[0] == '-')
            i = 1;
        while (num[i])
        {
            if(!isdigit(num[i]) &&  num[i] != 'f' && num[i] != '.')
            {
                cout << "nan" << endl;
                return 0;
            }    
            i++;
        }
        if(is_valid(num) == 11)
            call_cast_float(num);
        else if(is_valid(num) == 1)
            call_cast(num);
        else if(is_valid(num) == 10)
            cout << "nanf" << endl;
            
    }
    else
        cout << "shoude pass one arg"<< endl;
    
}

//  if .2 => 0.2

// if not  integer => nan
// if not flaot => nanf
// if max or min float => -inff, +inff
// if max or min int => -inf, +inf
 