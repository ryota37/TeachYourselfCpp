// Convert "3.14159265" to a floating point value as easy as possible.

#include <iostream>
#include <string>

int main()
{
    std::string str = "3.14159265";
    double num = std::stof(str);
    
    std::cout << str << std::endl;
    std::cout << num << std::endl;
}

// cf. std::setprecision()