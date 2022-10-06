#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
 
int main(int argc, char *argv[])
{
	std::string line;
	std::string filename;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string temp;
    std::string temp_s2;
    int j;
    

    if (argc == 4)
    {
        filename = argv[1];
        size_t i; 

        std::ifstream orging_file(filename); 
        
        std::ofstream copy_file(filename + ".replace");
 
        std::string str;
        if(orging_file.is_open() && copy_file.is_open())
        {
            while (getline(orging_file, line)) 
            {
                i = 0;
                temp = line;
                while (temp[i])
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
        std::cout << "Cannot read File";

}
