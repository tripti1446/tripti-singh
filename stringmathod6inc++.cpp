#include <iostream>

int main()
{
    std::string name;

    std::cout<<"Enter you name:";
    std::getline(std::cin, name);

    name.insert(0 , "@");

    std::cout<< name;

    return 0;
}