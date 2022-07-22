#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>


 int main ()
{
    std::size_t i = 0;
    const char *path = "C:\\virus\\";
    std::string content = "Testando Script no C++ 0x0";
    _mkdir(path);
    while (true)
    {
    i++;
    std::fstream file;
    file.open(path + std::to_string(i) + ".txt", std::ios_base::out);
    file << content;
    file.close();
    std::cout << "File created" + std::to_string(i) + "\r\n";
    if(i == 5){
        break;
    }
    }
    return -1;

}