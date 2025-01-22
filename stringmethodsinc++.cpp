#include <iostream>

int main()
{
    std::string name;

    std::cout<<"enter your name:";
    std::getline(std::cin,name);

    if(name.length ()>12){
        std::cout<<"your name don't be over 12 character";
    }
    else{
        std::cout<<"welcom"<<name;
    }
    return 0;
}