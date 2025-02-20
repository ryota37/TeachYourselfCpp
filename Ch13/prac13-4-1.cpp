// Convert an int value to a string as easy as possible.

#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    int num = 42;
    std::string str = std::to_string(num);
    
    std::cout << num << std::endl;
    std::cout << str << std::endl;
}