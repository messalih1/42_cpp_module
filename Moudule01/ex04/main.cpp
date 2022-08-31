// C++ Program to demonstrate
// copying the content of a .txt file
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    // if found  char from s1 equal  char from origine file will replace by string s2
	string line;
	string filename;
    string s1 = argv[2];
    string s2 = argv[3];
    string temp;
    string temp_s2;
    int j;
    // mustamupha
    // s1: mu | s2 : aaaaa
    //

    if (argc == 4)
    {
        filename = argv[1];
        size_t i;// because will use with strlen

        ifstream orging_file(filename);// Reads from files
        
        ofstream copy_file(filename + ".replace");
 
        string str;
        if(orging_file.is_open() && copy_file.is_open())
        {
            while (getline(orging_file, line)) 
            {
                i = 0;
                temp = line;
                while (temp[i])//   mustamuphamujfu mu
                {
                    if((j = temp.find(s1)) != -1)
                    {
                       str.resize(j);
                       i += str.length();
                       str.append(s2);
                       temp_s2 = &temp[j + strlen(s1.c_str())];
                       str.append(temp_s2);
                       temp = str;
                    }
                    i++;
                }
            copy_file << temp << "\n";
            }
        }
	}
	else
        cout << "Cannot read File";
	// return 0;
}
