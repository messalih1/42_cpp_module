#include "iter.h"


 

 
void f(int x)
{
    cout << x + 1 << endl;
}

void put_str(string str)
{
    cout << str << endl;
}

 

// every data type have Template



 

int main()
{
    
    int arr[] = {1,2,3};
     
    iter(arr, sizeof(arr) / sizeof(arr[0]),f);
   
    string str[] = {"string1","string2", "string3"};

    iter(str, sizeof(str) / sizeof(str[0]),put_str);

}
 

 