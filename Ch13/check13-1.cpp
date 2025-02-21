// Concatenate multiple std::string and create a long string.

#include <iostream>
#include <string>

int main()
{
    std::string str1 = "Teach";
    std::string str2 = "yourself";
    std::string str3 = "C++";
    std::string str = str1 + " " + str2 + " " + str3;
    std::cout << str << std::endl;
    return 0;
}