#include <iostream>

int main()
{
    std::string name;

    std::cout<<"Enter your name:";
    std::getline(std::cin, name);

    std::cout<<name.at(0);

    return 0;
}