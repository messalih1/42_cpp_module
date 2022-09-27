#include "cast.h"

long long	ft_atoi(const char *str)
{
	int		i;
	long		nbr;
	int		n;

	i = 0;
	nbr = 0;
	n = 0;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		n = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (n == 1)
		return (-nbr);
	return (nbr);
}

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
    long  long   integer;
    double  d;
    char    c;

    if(!isdigit(num[0]) && num[0] != '.' && num[0] != '-')
    {
        c = num[0]; 
        if(isprint(c))
            cout << "char: " << "'" << c << "'" << endl;
        else
            cout << "char: Non displayable" << endl;

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
        number = std::stod(num.c_str());

        c = static_cast<char>(number); 

        if(isprint((int)number))
            cout << "char: " << "'" << c << "'" << endl;
        else
            cout << "char: Non displayable" << endl;

        integer = static_cast<int>(number); 
        
        cout << "int: " << integer << endl;

        cout << "float: " << number << ".0f" << endl;

        d = static_cast<double>(number);    

        cout << "double: " << d  << endl;

    }
    else
    { 
        int t = 0;
        int i = 0;
        while (num[i])
        {
            if(num[i] == '.')
                t = 1;
            i++;
        }
        
        if(t)
        {
            
            number = std::stod(num.c_str());
              
            c = static_cast<char>(number); 

            if(isprint((int)number))
                cout << "char: " << "'" << c << "'" << endl;
            else
                cout << "char: Non displayable" << endl;

            integer = static_cast<int>(number); 
            
            
            if(integer <= INT_MIN)
                cout << "int: -inf" << endl;
            else if(integer >= INT_MAX)
                cout << "int: +inf" << endl;
            else
                cout << "int: " << integer << endl;

            if(number <= std::numeric_limits<float>::min())
                cout <<  "float: -inff" << endl;
            else if(number >= std::numeric_limits<float>::max())
                cout << "float: +inff" << endl;
            else
                cout << "float: " << number << ".0f" << endl;
 
            d = static_cast<double>(number);    

            if(d <= std::numeric_limits<double>::min())
                cout <<  "double: -inff" << endl;
            else if(d >= std::numeric_limits<double>::max())
                cout << "double: +inff" << endl;
            else
                cout << "double: " << d << endl;
        }
        else
        {
            integer = ft_atoi(num.c_str());
            
            c = static_cast<char>(integer); 
             
            if(isprint(integer))
                cout << "char: " << "'" << c << "'" << endl;
            else
                cout << "char: Non displayable" << endl;
            if(integer <= INT_MIN)
                cout <<  " int: -inf" << endl;
            else if(integer >= INT_MAX)
                cout << "int: +inf" << endl;
            else
                cout << "int: " << integer << endl;

            number = static_cast<float>(integer);
            if(number <= std::numeric_limits<float>::min())
                cout <<  "float: -inff" << endl;
            else if(number >= std::numeric_limits<float>::max())
                cout << "float: +inff" << endl;
            else
                cout << "float: " << number << ".0f" << endl;
            
            d = static_cast<double>(integer);    

            if(d <= std::numeric_limits<double>::min())
                cout <<  "double: -inff" << endl;
            else if(d >= std::numeric_limits<double>::max())
                cout << "double: +inff" << endl;
            else
                cout << "double: " << d << ".0" << endl;
        }

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
    

    //    << std::numeric_limits<float>::min() << " / "
    //    << std::numeric_limits<float>::max() << '\n';
}

//  if .2 => 0.2
//  double: nan
// if not  integer => nan
// if not flaot => nanf
// if max or min float => -inff, +inff
// if max or min int => -inf, +inf
 