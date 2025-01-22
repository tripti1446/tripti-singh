#include <iostream>

int main()
{
    std::string name;

    std::cout<<"enter your name:";
    std::getline(std::cin,name);

    name.clear();

    std::cout<<"hello"<< name;

    return 0;
}