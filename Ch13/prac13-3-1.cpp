// Extract any part of std::string that you initialized with any string.
// Then check the content of the extracted string.

#include <iostream>
#include <string>

int main()
{
    std::string str = "Full Moon Full Life";
    std::string subStr = str.substr(5, 4);
    std::cout << "str: " << str << std::endl;
    std::cout << "subStr: " << subStr << std::endl;

    return 0;
}