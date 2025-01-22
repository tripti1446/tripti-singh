#include <iostream>

int main()
{
    std::string name;

    std::cout<<"enter your name:";
    std::getline(std::cin,name);

    if(name.empty ()){
        std::cout<<"you didn't enter your name";
    }
    else{
        std::cout<<"hello"<<name;
    }
    return 0;
}