#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <limits.h>
#include <cfloat>
#include <climits>
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
                        return 1;
                    else
                        return 0;
                }
                i++;
            }
            if(str[i] == '\0')
                return 1;
            else
                return 0;
        }
        else if(str[i] == 'f')
            return 0;
        i++;
    }
    return 1;
}


void call_cast(std::string num)
{
    float   number;
    int     integer;
    double  d;
    char    c;

    if(!isdigit(num[0]) && num[0] != '.')
    {
        c = num[0]; 
        if(isprint(c))
            cout << "char: " << "'" << c << "'" << endl;
        else
            cout << "Non displayable" << endl;

        integer = static_cast<int>(c); 
        cout << "int: " << integer << endl;

        number = static_cast<float>(c);    

        cout << "float: " << number << ".0f" << endl;

        d = static_cast<double>(c);    

        cout << "double: " << number << ".0" << endl;
        return ;
    }
    else if(num[0] == '.')// .3 (int) => 0
    {
        number = std::stof(num.c_str());

        c = static_cast<char>(number); 

        if(isprint(c))
            cout << "char: " << "'" << c << "'" << endl;
        else
            cout << "Non displayable" << endl;

        integer = static_cast<int>(number); 
        
        cout << "int: " << integer << endl;

            

        cout << "float: " << number << "f" << endl;

        d = static_cast<double>(integer);    

        cout << "double: " << number  << endl;

    }
    else
    {
        integer = atoi(num.c_str());
        // number = std::stof(num.c_str());

        c = static_cast<char>(integer); 

        if(isprint(c))
            cout << "char: " << "'" << c << "'" << endl;
        else
            cout << "Non displayable" << endl;


        cout << "int: " << integer << endl;

        number = static_cast<float>(integer);    

        cout << "float: " << number << ".0f" << endl;

        d = static_cast<double>(integer);    

        if(d > std::numeric_limits<double>::max())
            cout << "EEEEEE\n";
        cout << "double: " << number << ".0" << endl;

    }




}


void return_error ()
{
    cout << "char: impossible" << endl;
    cout << "int: impossible" << endl;
    cout << "float: nanf" << endl;
    cout << "double: nan" << endl;
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

        if(num.length() == 1)
            return(call_cast(num),0);
        
        if(num[0] == '-')
            i = 1;
        while (num[i])
        {
            if(!isdigit(num[i]) &&  num[i] != 'f' && num[i] != '.')
                return (return_error(),0);
             
            i++;
        }
        if(is_valid(num))
            call_cast(num);
        else
            return (return_error(),0);
      
           
    }
    else
        cout << "shoude pass one arg"<< endl;
   
}

//  if .2 => 0.2
//  double: nan
// if not  integer => nan
// if not flaot => nanf
// if max or min float => -inff, +inff
// if max or min int => -inf, +inf
 