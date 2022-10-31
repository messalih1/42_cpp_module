#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
 
int main(int argc, char *argv[])
{
	std::string line;
	std::string filename;
    std::ifstream orging_file;
    std::ofstream copy_file;
    std::string temp;
    int j;
    
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        size_t i; 
        filename = argv[1];

        orging_file.open(filename);
        if(!orging_file.is_open())
            return (std::cout << "Cannot read File" << std::endl,0);
        copy_file.open(filename + ".replace");
        i = 0;
        while (std::getline(orging_file, line))
        {
            temp = line;
            if((j = temp.find(s1)) != -1)
            {
                while (temp[i])
                {
                    if((j = temp.find(s1)) != -1)
                    {
                        temp.erase(j,strlen(s1.c_str()));
                        temp.insert(j,s2.c_str());
                        i += strlen(s2.c_str());
                    }
                    else
                        i++;
                }
            }
            copy_file << temp << std::endl;
        }
    }
    else
        std::cout << "only 3 arguments" << std::endl;
}
